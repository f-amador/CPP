#include "whatever.hpp"

int main(void)
{
    int x = 12;
    int y = 10;

    char char1 = 'a';
    char char2 = 'w';


    std::cout << "----------INT TEST----------\n\n";
    std::cout << "BEFORE\nx: " << x << "\ny: " << y << "\n";
    std::cout << "MAX: " << max(x, y) << "\nMIN: " << min(x, y) << "\n"; 
    swap(x, y);
    std::cout << "After\nx: " << x << "\ny: " << y << "\n";
    std::cout << "MAX: " << max(x, y) << "\nMIN: " << min(x, y) << "\n";

    std::cout << "\n\n----------CHAR TEST----------\n\n";
    std::cout << "BEFORE\nchar1: " << char1 << "\nchar2: " << char2 << "\n";
    std::cout << "MAX: " << max(char1, char2) << "\nMIN: " << min(char1, char2) << "\n"; 
    swap(char1, char2);
    std::cout << "After\nchar1: " << char1 << "\nchar2: " << char2 << "\n";
    std::cout << "MAX: " << max(char1, char2) << "\nMIN: " << min(char1, char2) << "\n";
}














