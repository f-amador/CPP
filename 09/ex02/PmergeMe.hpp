#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private:
	    std::vector<int> _vec;
	    std::deque<int> _deq;
	
	    // Vector sorting methods
	    void sortVector();
	    void fordJohnsonSortVector(std::vector<int> &arr);
	    void mergeInsertVector(std::vector<std::pair<int, int> > &pairs, std::vector<int> &result);
	    // Deque sorting methods  
	    void sortDeque();
	    void fordJohnsonSortDeque(std::deque<int> &arr);
	    void mergeInsertDeque(std::deque<std::pair<int, int> > &pairs, std::deque<int> &result);
	
	public:
	    PmergeMe();
	    PmergeMe(const PmergeMe &other);
	    PmergeMe &operator=(const PmergeMe &other);
	    ~PmergeMe();
	
	    void parseInput(int ac, char *av[]);
	    void sortAndDisplay();
};

#endif