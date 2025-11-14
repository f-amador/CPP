#include "PmergeMe.hpp"

static std::vector<size_t> buildInsertionOrder(size_t pairCount)
{
    std::vector<size_t> order;
    if (pairCount <= 1) return order;

    size_t maxIndex = pairCount - 1;
    static const size_t jacob[] = {
        1, 3, 5, 11, 21, 43, 85, 171, 341, 683,
        1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763,
        349525, 699051, 1398101, 2796203, 5592405, 11184811,
        22369621, 44739243, 89478485, 178956971, 357913941, 715827883
    };
    const size_t jacobCount = sizeof(jacob) / sizeof(jacob[0]);

    size_t last = 0;
    size_t k = 0;
    while (last < maxIndex)
	{
        size_t j = (k < jacobCount) ? jacob[k] : maxIndex;
        if (j > maxIndex) j = maxIndex;
        for (size_t i = j; i > last; --i)
		{
            order.push_back(i);
        }
        last = j;
        ++k;
    }
    return order;
}

// Compare by first (max) ascending
static bool comparePairByFirst(const std::pair<int,int>& a, const std::pair<int,int>& b) {
    return a.first < b.first;
}

PmergeMe::PmergeMe() {};

PmergeMe::PmergeMe(const PmergeMe &other)
{
    _vec = other._vec;
    _deq = other._deq;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        _vec = other._vec;
        _deq = other._deq;
    }
    return (*this);
}

PmergeMe::~PmergeMe() {};

void PmergeMe::parseInput(int ac, char *av[])
{
    if (ac < 2)
        throw std::runtime_error("ERROR: Not Enough Arguments");
    for (int i = 1; i < ac; ++i)
    {
        long tmp;
        for (int j = 0; av[i][j]; j++)
        {
            if (!std::isdigit(static_cast<unsigned char>(av[i][j])))
                throw std::runtime_error("ERROR: Non Numeric argument");
        }
        std::istringstream str(av[i]);
        if (!(str >> tmp))
            throw std::runtime_error("ERROR: Invalid number");
        if (tmp > static_cast<long>(std::numeric_limits<int>::max()))
            throw std::runtime_error("ERROR: Bigger than INT MAX");
        else if (tmp < 0)
            throw std::runtime_error("ERROR: Negative Number");
        else
        {
            std::vector<int>::iterator it = std::find(_vec.begin(), _vec.end(), static_cast<int>(tmp));
            if (it != _vec.end())
                throw std::runtime_error("ERROR: Duplicate Ints");
        }
        _vec.push_back(static_cast<int>(tmp));
        _deq.push_back(static_cast<int>(tmp));
    }
}

void PmergeMe::sortAndDisplay()
{
    std::cout << "Before: ";
    for(size_t i = 0; i < _vec.size(); i++)
    {
        std::cout << _vec[i] << " "; 
    }
    std::cout << std::endl;

    std::clock_t startVec = std::clock();
    sortVector();
    std::clock_t endVec = std::clock();
    double timeVec = double(endVec - startVec) / CLOCKS_PER_SEC * 1000000;	

    std::clock_t startDeq = std::clock();
    sortDeque();
    std::clock_t endDeq = std::clock();
    double timeDeq = double(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;	

    std::cout << "After: ";
    for(size_t i = 0; i < _vec.size(); i++)
    {
        std::cout << _vec[i] << " "; 
    }
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << timeVec << " us" << std::endl;
    std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque  : " << timeDeq << " us" << std::endl;
}

void PmergeMe::sortVector()
{
    fordJohnsonSortVector(_vec);
}

void PmergeMe::sortDeque()
{
    fordJohnsonSortDeque(_deq);	
}

void PmergeMe::fordJohnsonSortVector(std::vector<int> &arr)
{
    if (arr.size() <= 1)
        return;

    int straggler = -1;
    bool hasStraggler = false;
    if (arr.size() % 2 == 1)
    {
        straggler = arr.back();
        hasStraggler = true;
        arr.pop_back();
    }

    // Build pairs (max, min)
    std::vector<std::pair<int,int> > pairs;
    pairs.reserve(arr.size() / 2);
    for (size_t i = 0; i < arr.size(); i += 2)
    {
        int a = arr[i];
        int b = arr[i + 1];
        if (a < b)
            std::swap(a, b);
        pairs.push_back(std::make_pair(a, b));
    }
    // for (int i = 0; i < static_cast<int>(pairs.size()); ++i)
    // {
    //      std::cout << "Pair " << i << ": (" << pairs[i].first << ", " << pairs[i].second << ")\n";
    // }
    // Recursively sort maxima
    std::vector<int> maxima;
    maxima.reserve(pairs.size());
    for (size_t i = 0; i < pairs.size(); ++i)
        maxima.push_back(pairs[i].first);
    // for (int i = 0; i < static_cast<int>(maxima.size()); ++i)
    // {
    //      std::cout << "Maxima " << i << ": " << maxima[i] << "\n";
    // }
    fordJohnsonSortVector(maxima); // recursion on half-size problem

    // Reorder pairs according to sorted maxima in O(n log n + n)
    std::vector<std::pair<int,int> > pairsSorted = pairs;
    std::sort(pairsSorted.begin(), pairsSorted.end(), comparePairByFirst);

    std::vector<std::pair<int,int> > orderedPairs;
    orderedPairs.reserve(pairs.size());
    size_t iMax = 0, iPair = 0;
    while (iMax < maxima.size() && iPair < pairsSorted.size()) {
        if (pairsSorted[iPair].first == maxima[iMax])
        {
            orderedPairs.push_back(pairsSorted[iPair]);
            ++iMax;
            ++iPair;
        } else if (pairsSorted[iPair].first < maxima[iMax])
            ++iPair;
    }
    //     for (int i = 0; i < static_cast<int>(orderedPairs.size()); ++i)
    // {
    //      std::cout << "Ordered Pair " << i << ": (" << orderedPairs[i].first << ", " << orderedPairs[i].second << ")\n";
    // }
    // Build main chain: [min_of_first_pair, all maxima...]
    std::vector<int> mainChain;
    mainChain.reserve(orderedPairs.size() + 1);
    mainChain.push_back(orderedPairs[0].second);
    for (size_t i = 0; i < orderedPairs.size(); ++i)
        mainChain.push_back(orderedPairs[i].first);
    // for (int i = 0; i < static_cast<int>(mainChain.size()); ++i)
    // {
    //      std::cout << "Main Chain " << i << ": " << mainChain[i] << "\n";
    // }
    // Insert all mins in Jacobsthal order
    std::vector<size_t> insertionOrder = buildInsertionOrder(orderedPairs.size());
    // for (int i = 0; i < static_cast<int>(insertionOrder.size()); ++i)
    // {
    //      std::cout << "Insertion Order " << i << ": " << insertionOrder[i] << "\n";
    // }
    for (size_t k = 0; k < insertionOrder.size(); ++k)
    {
        size_t index = insertionOrder[k];
        int element = orderedPairs[index].second;
        // std::cout << "Inserting element: " << element << " from pair index: " << index << "\n";
        std::vector<int>::iterator pos =
            std::lower_bound(mainChain.begin(), mainChain.end(), element);
        mainChain.insert(pos, element);
    }
    if (hasStraggler)
    {
        std::vector<int>::iterator pos =
        std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }
    // for (int i = 0; i < static_cast<int>(mainChain.size()); ++i)
    // {
    //      std::cout << "Main Chain after insertion " << i << ": " << mainChain[i] << "\n";
    // }
    arr.swap(mainChain);
}

void PmergeMe::fordJohnsonSortDeque(std::deque<int> &arr)
{
    if (arr.size() <= 1)
        return;

    int straggler = -1;
    bool hasStraggler = false;
    if (arr.size() % 2 == 1)
    {
        straggler = arr.back();
        hasStraggler = true;
        arr.pop_back();
    }

    // Build pairs (max, min)
    std::vector<std::pair<int,int> > pairs;
    pairs.reserve(arr.size() / 2);
    for (size_t i = 0; i < arr.size(); i += 2)
    {
        int a = arr[i];
        int b = arr[i + 1];
        if (a < b) std::swap(a, b);
        pairs.push_back(std::make_pair(a, b));
    }

    // Recursively sort maxima
    std::deque<int> maxima;
    for (size_t i = 0; i < pairs.size(); ++i)
        maxima.push_back(pairs[i].first);

    fordJohnsonSortDeque(maxima); // recursion on half-size problem

    // Reorder pairs according to sorted maxima in O(n log n + n)
    std::vector<std::pair<int,int> > pairsSorted = pairs;
    std::sort(pairsSorted.begin(), pairsSorted.end(), comparePairByFirst);

    std::vector<std::pair<int,int> > orderedPairs;
    orderedPairs.reserve(pairs.size());
    size_t iMax = 0, iPair = 0;
    while (iMax < maxima.size() && iPair < pairsSorted.size()) {
        if (pairsSorted[iPair].first == maxima[iMax])
        {
            orderedPairs.push_back(pairsSorted[iPair]);
            ++iMax;
            ++iPair;
        }
        else if (pairsSorted[iPair].first < maxima[iMax])
            ++iPair;
        else
            ++iMax;
    }

    // Build main chain: [min_of_first_pair, all maxima...]
    std::deque<int> mainChain;
    mainChain.push_back(orderedPairs[0].second);
    for (size_t i = 0; i < orderedPairs.size(); ++i)
        mainChain.push_back(orderedPairs[i].first);
    // Insert all mins in Jacobsthal order
    std::vector<size_t> insertionOrder = buildInsertionOrder(orderedPairs.size());
    for (size_t k = 0; k < insertionOrder.size(); ++k)
    {
        size_t index = insertionOrder[k];
        int element = orderedPairs[index].second;
        std::deque<int>::iterator pos =
            std::lower_bound(mainChain.begin(), mainChain.end(), element);
        mainChain.insert(pos, element);
    }
    if (hasStraggler)
    {
        std::deque<int>::iterator pos =
            std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }
    arr.swap(mainChain);
}