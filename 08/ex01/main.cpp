#include "Span.hpp"


int main(void)
{
    Span test(10000);
    std::cout << "Creating an array with 10000 positions" << std::endl;
    try
    {
        srand(time(0));
        for (unsigned int i = 0; i <= test.getSize(); i++)
        {
            int a = rand() % 30000000;
            std::cout << "Trying to add " << a << std::endl;
            test.addNumber(a);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Span test2(1);
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