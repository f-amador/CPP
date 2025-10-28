// #include "iter.hpp"

// void toupper_wrapper(char &c)
// {
//     if (c >= 'a' && c <= 'z')
//         c -= 32;
// }

// void print_element(const char &c)
// {
//     std::cout << c << " ";
// }


// void toupper_wrapper2(int &c)
// {
//     if (c >= 'a' && c <= 'z')
//         c -= 32;
// }

// void print_element2(const int &c)
// {
//     std::cout << c << " ";
// }

// int main(void)
// {
//     char arr[] = {'a', 'b', 'c'};
    
//     iter(arr, 3, print_element);
//     std::cout << std::endl;
    
//     iter(arr, 3, toupper_wrapper);
    
//     iter(arr, 3, print_element);
//     std::cout << std::endl;

//     int arr2[] = {'a', 'b', 'c'};
    
//     iter(arr2, 3, print_element2);
//     std::cout << std::endl;
    
//     iter(arr2, 3, toupper_wrapper2);
    
//     iter(arr2, 3, print_element2);
//     std::cout << std::endl;
    
//     return 0;
// }

#include "iter.hpp"
#include <cstddef>
#include <iostream>
#include <cstdlib>
#include <ctime>
template <typename T>
void    printElement(T& element){
    std::cout << element << " ";
}

template <typename T>
void    incrementElement(T& element){
    element++;
}

template <typename T>
void    decrementElement(T& element){
    element--;
}
template <typename T>
void    addRand(T& element){
    static bool randomized = false;
    if (!randomized){
        std::srand(std::time(0));
        randomized = true;
    }
    int random = std::rand() % 2147483647;
    element += random;
}


int main() {
    int arr[4] = {-2147483648, -1, 0, 2147483647};
    const int arr2[4] = {-2147483648, -1, 0, 2147483647};


    size_t  size = sizeof(arr)/sizeof(arr[0]);
    size_t  size2 = sizeof(arr2)/sizeof(arr2[0]);

    std::cout << "Printing modifiable array:\n\n";
    iter(arr, size, printElement<int>);
    std::cout << std::endl;
    std::cout << "Incrementing the array\n\n" << std::endl;
    iter(arr, size, incrementElement<int>);
    std::cout << "Printing modified array:\n\n";
    iter(arr, size, printElement<int>);
    std::cout << std::endl;

    std::cout << "Adding randomly\n\n" << std::endl;
    iter(arr, size, addRand<int>);
    std::cout << "Printing randomly modified array:\n\n";
    iter(arr, size, printElement<int>);
    std::cout << std::endl;

    std::cout << "Printing read-only array [CONST]" << std::endl;
    iter(arr2, size2, printElement<const int>);
    /*
        Uncomment this to have a compilation error! =)
    */
    //  std::cout << "Tried to modify the const array" << std::endl;
    //  iter(arr2, size2, incrementElement<const int>);    
}
