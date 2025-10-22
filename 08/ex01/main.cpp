#include "Span.hpp"


int main(void)
{
    Span test(10001);
    std::cout << "Creating an array with 10001 positions" << std::endl;
    try
    {
        test.fillvector();
        std::cout << "ARRAY was filled" << std::endl; 
        std::cout << "trying to fill test twice" << std::endl;
        test.fillvector();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Span test2(1);
        std::cout << "shortest span with only 1 value" << std::endl;
        test2.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "test Shortest Span-> " <<  test.shortestSpan() << std::endl;
    std::cout << "test Longest Span-> " <<  test.longestSpan() << std::endl;
    
    Span test3(2);
    test3.addNumber(69);
    test3.addNumber(666);
    std::cout << "test2 Shortest Span-> " <<  test3.shortestSpan() << std::endl;
    std::cout << "test2 Longest Span-> " <<  test3.longestSpan() << std::endl;

    return 0;
}