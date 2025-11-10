#include "PmergeMe.hpp"

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
	for (int i = 1; av[i]; i++)
	{
		long tmp;
		for (int j = 0;av[i][j]; j++)
		{
			if (!std::isdigit(av[i][j]))
				throw std::runtime_error("ERROR: Non Numeric argument");
		}
		std::istringstream str(av[i]);
		str >> tmp;
		if (tmp > 2147483647)
			throw std::runtime_error("ERROR: Bigger than INT MAX");
		else if (tmp < 0)
			throw std::runtime_error("ERROR: Negative Number");
		else
		{
			std::vector<int>::iterator it = std::find(_vec.begin(), _vec.end(), tmp);
			if (it != _vec.end())
				throw std::runtime_error("ERROR: Duplicate Ints");		
		}
		_vec.push_back(tmp);
		_deq.push_back(tmp);
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

	std::vector<std::pair<int, int> >pairs;
	for(size_t i = 0; i < arr.size(); i += 2)
	{
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}

	for (size_t i = 0; i < pairs.size(); i++)
	{
		for (size_t j = i + 1; j < pairs.size(); j++)
		{
			if (pairs[i].first > pairs[j].first)
				std::swap(pairs[i], pairs[j]);
		}
	}

	std::vector<int> mainChain;
	mainChain.push_back(pairs[0].second);

	for (size_t i = 0; i < pairs.size(); i++)
	{
		mainChain.push_back(pairs[i].first);
	}

	std::vector<int> insertionOrder;
    size_t jacobsthal[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 681, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525};   
    size_t jacobIndex = 0;
    size_t lastIndex = 0;
    while (true)
	{
        size_t current = jacobsthal[jacobIndex];
        if (current > pairs.size() - 1)
            current = pairs.size() - 1;
        for (size_t i = current; i > lastIndex; i--)
		{
            if (i < pairs.size())
                insertionOrder.push_back(i);
        }
        if (current >= pairs.size() - 1)
			break;
        lastIndex = current;
        jacobIndex++;
    }

	for (size_t i = 0; i < insertionOrder.size(); i++)
	{
        size_t index = insertionOrder[i];
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

	std::deque<std::pair<int, int> >pairs;
	for(size_t i = 0; i < arr.size(); i += 2)
	{
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}

	for (size_t i = 0; i < pairs.size(); i++)
	{
		for (size_t j = i + 1; j < pairs.size(); j++)
		{
			if (pairs[i].first > pairs[j].first)
				std::swap(pairs[i], pairs[j]);
		}
	}

	std::deque<int> mainChain;
	mainChain.push_back(pairs[0].second);

	for (size_t i = 0; i < pairs.size(); i++)
	{
		mainChain.push_back(pairs[i].first);
	}

	std::deque<int> insertionOrder;
    size_t jacobsthal[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 681, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525};
    size_t jacobIndex = 0;
    size_t lastIndex = 0;
    while (true)
	{
        size_t current = jacobsthal[jacobIndex];
        if (current > pairs.size() - 1)
            current = pairs.size() - 1;
        for (size_t i = current; i > lastIndex; i--)
		{
            if (i < pairs.size())
                insertionOrder.push_back(i);
        }
        
        if (current >= pairs.size() - 1)
			break;
        lastIndex = current;
        jacobIndex++;
    }

	for (size_t i = 0; i < insertionOrder.size(); i++)
	{
        size_t index = insertionOrder[i];
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