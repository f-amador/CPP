#include "RPN.hpp"
int main(int ac, char *av[])
{
    (void)av;
    if (ac != 2)
        std::cerr << "ERROR\nInvalid number of arguments\nUsage: ./RPN \" RPN EXPRESSION\"" << std::endl;
    int itmp, fop, sop;
    char ctmp;
    std::stack<char> stack;
    std::istringstream parse(av[1]);

    (void)fop;
    (void)sop;
    (void)ctmp;

    for(int i = 0; i < 2; i++)
    {
        parse >> itmp;
        if (itmp > 9 || itmp < 0)
        {
            std::cerr << "ERROR\n";
            return (1);
        }
    }

    
    
}