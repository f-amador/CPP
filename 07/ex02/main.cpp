#include "Array.hpp"
#include <iostream>
#include <string>
#include <cassert>

struct ComplexType {
    int id;
    std::string name;
};

int main() {
    std::cout << "=== Testing Array Template ===\n" << std::endl;

    // Test 1: Array of integers
    std::cout << "1. Testing Array of integers:" << std::endl;
    try {
        Array<int> intArray(5);
        for (int i = 0; i < 5; ++i) {
            intArray[i] = i * 10;
        }
        for (int i = 0; i < 5; ++i) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }
        std::cout << "Size: " << intArray.size() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Test 2: Array of many integers
    std::cout << "\n2. Testing large Array:" << std::endl;
    try {
        Array<int> largeArray(1000);
        std::cout << "Large array created with size: " << largeArray.size() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Test 3: Out of bounds access
    std::cout << "\n3. Testing out of bounds access:" << std::endl;
    try {
        Array<int> smallArray(3);
        smallArray[5] = 42; // This should throw
    } catch (std::exception &e) {
        std::cerr << "Expected error: " << e.what() << std::endl;
    }

    // Test 4: Negative index
    std::cout << "\n4. Testing negative index:" << std::endl;
    try {
        Array<int> array(3);
        array[-1] = 42; // This should throw
    } catch (std::exception &e) {
        std::cerr << "Expected error: " << e.what() << std::endl;
    }

    // Test 5: Array of strings
    std::cout << "\n5. Testing Array of strings:" << std::endl;
    try {
        Array<std::string> strArray(3);
        strArray[0] = "Hello";
        strArray[1] = "World";
        strArray[2] = "!";
        
        for (int i = 0; i < 3; ++i) {
            std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;
        }
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Test 6: Array of complex types
    std::cout << "\n6. Testing Array of complex types:" << std::endl;
    try {
        Array<ComplexType> complexArray(2);
        complexArray[0] = ComplexType();
        complexArray[0].id = 1;
        complexArray[0].name = "First";
        complexArray[1] = ComplexType();
        complexArray[1].id = 2;
        complexArray[1].name = "Second";
        
        for (int i = 0; i < 2; ++i) {
            std::cout << "complexArray[" << i << "]: {id: " << complexArray[i].id 
                      << ", name: " << complexArray[i].name << "}" << std::endl;
        }
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Test 7: Copy constructor and assignment
    std::cout << "\n7. Testing copy and assignment:" << std::endl;
    try {
        Array<int> original(5);
        for (int i = 0; i < 5; ++i) {
            original[i] = i * 2;
        }

        Array<int> copy = original;
        copy[2] = 100;

        std::cout << "Original: ";
        for (int i = 0; i < 5; ++i) {
            std::cout << original[i] << " ";
        }
        std::cout << "\nCopy: ";
        for (int i = 0; i < 5; ++i) {
            std::cout << copy[i] << " ";
        }
        std::cout << "\nOriginal size: " << original.size() << std::endl;
        std::cout << "Copy size: " << copy.size() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== All tests completed ===" << std::endl;
    return 0;
}