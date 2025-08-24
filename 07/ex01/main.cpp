#include "iter.hpp"

void toupper_wrapper(char &c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
}

void print_element(const char &c)
{
    std::cout << c << " ";
}


void toupper_wrapper2(int &c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
}

void print_element2(const int &c)
{
    std::cout << c << " ";
}

int main(void)
{
    char arr[] = {'a', 'b', 'c'};
    
    iter(arr, 3, print_element);
    std::cout << std::endl;
    
    iter(arr, 3, toupper_wrapper);
    
    iter(arr, 3, print_element);
    std::cout << std::endl;

    int arr2[] = {'a', 'b', 'c'};
    
    iter(arr2, 3, print_element2);
    std::cout << std::endl;
    
    iter(arr2, 3, toupper_wrapper2);
    
    iter(arr2, 3, print_element2);
    std::cout << std::endl;
    
    return 0;
}