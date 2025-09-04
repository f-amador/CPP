#include "easyfind.hpp"

int main(void)
{
    std::vector<int> test;
    test.push_back(6);
    test.push_back(1);
    test.push_back(4);
    test.push_back(111);
    test.push_back(2);
    test.push_back(122);
    
    std::vector<int>::iterator it = easyfind(test, 2);
    std::vector<char> test2;

    test2.push_back('2');
    test2.push_back('w');
    test2.push_back('d');
    test2.push_back('c');
    test2.push_back('v');
    test2.push_back('a');
    std::vector<int>::iterator it2 = easyfind(test, 2);

    if (it != test.end())
    {
        std::cout << "FOUND: " << *it << "at position" << (it - test.begin()) << std::endl;

    }
    else
    {
        std::cout << "VALUE NOT FOUND!" << std::endl;

    }
    if (it2 != test.end())
    {
        std::cout << "FOUND: " << *it2 << "at position" << (it2 - test.begin()) << std::endl;

    }
    else
    {
        std::cout << "VALUE NOT FOUND!" << std::endl;

    }
}