#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
        std::cerr << "ERROR\nOnly one argument required.\n";
    ScalarConverter::convert(av[1]);
    return(0);
}