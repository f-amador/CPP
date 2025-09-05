#include "Span.hpp"


int main(void)
{
    std::vector<int> test;
    test.push_back(1);
    test.push_back(5);
    test.push_back(2);
    test.push_back(3);
    std::vector<int>::iterator it = easyfind(test, 2);
    std::vector<int>::iterator notFound = easyfind(test, 99);
    
    std::vector<long> longTest;
    longTest.push_back(20L);
    longTest.push_back(30L);
    longTest.push_back(10L);
    std::vector<long>::iterator longIt = easyfind(longTest, 20L);
    
    if (it != test.end())

        std::cout << "FOUND: " << *it << " at position " << (it - test.begin()) << std::endl;
    if (longIt != longTest.end())
        std::cout << "FOUND LONG: " << *longIt << " at position " << (longIt - longTest.begin()) << std::endl;
    
    if (notFound == test.end())
        std::cout << "DID NOT FIND 99!" << std::endl;
    
    return 0;
}