#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <limits>
#include <cctype>

class PmergeMe
{
    private:
        std::vector<int> _vec;
        std::deque<int> _deq;
    
        // Vector sorting methods
        void sortVector();
        void fordJohnsonSortVector(std::vector<int> &arr);
        // Deque sorting methods  
        void sortDeque();
        void fordJohnsonSortDeque(std::deque<int> &arr);
    
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
    
        void parseInput(int ac, char *av[]);
        void sortAndDisplay();
};

#endif