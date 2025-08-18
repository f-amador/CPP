#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
        std::cerr << "ERROR\nOne argument required.\n";
    else
        ScalarConverter::convert(av[1]);
    return(0);
}