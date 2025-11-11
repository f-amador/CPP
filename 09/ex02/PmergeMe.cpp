#include "PmergeMe.hpp"

static bool compareFirstPair(const std::pair<int,int>& a, const std::pair<int,int>& b)
{
    return a.first < b.first;
}

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

    std::vector<std::pair<int, int> > pairs;
    pairs.reserve(arr.size() / 2);
    for(size_t i = 0; i < arr.size(); i += 2)
    {
        int a = arr[i];
        int b = arr[i + 1];
        if (a < b) std::swap(a, b);
        pairs.push_back(std::make_pair(a, b));
    }

    std::sort(pairs.begin(), pairs.end(), compareFirstPair);

    std::vector<int> mainChain;
    mainChain.reserve(pairs.size() + 1);
    mainChain.push_back(pairs[0].second);
    for (size_t i = 0; i < pairs.size(); ++i)
        mainChain.push_back(pairs[i].first);

    std::vector<size_t> insertionOrder = buildInsertionOrder(pairs.size());
    for (size_t k = 0; k < insertionOrder.size(); ++k)
    {
        size_t index = insertionOrder[k];
        int element = pairs[index].second;
        std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), element);
        mainChain.insert(pos, element);
    }

    if (hasStraggler)
    {
        std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }

    arr = mainChain;
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

    std::vector<std::pair<int, int> > pairs;
    pairs.reserve(arr.size() / 2);
    for(size_t i = 0; i < arr.size(); i += 2)
    {
        int a = arr[i];
        int b = arr[i + 1];
        if (a < b) std::swap(a, b);
        pairs.push_back(std::make_pair(a, b));
    }

    std::sort(pairs.begin(), pairs.end(), compareFirstPair);

    std::deque<int> mainChain;
    mainChain.push_back(pairs[0].second);
    for (size_t i = 0; i < pairs.size(); ++i)
        mainChain.push_back(pairs[i].first);

    std::vector<size_t> insertionOrder = buildInsertionOrder(pairs.size());
    for (size_t k = 0; k < insertionOrder.size(); ++k)
    {
        size_t index = insertionOrder[k];
        int element = pairs[index].second;
        std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), element);
        mainChain.insert(pos, element);
    }

    if (hasStraggler)
    {
        std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }

    arr = mainChain;
}