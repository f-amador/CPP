#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};

ScalarConverter::~ScalarConverter(){};

void ScalarConverter::parser(const char *str)
{

}

void ScalarConverter::convert(const char *str)
{
    double cast;

    cast = std::atof(str);
    if (!cast && std::strlen(str) != 0 && std::strlen(str) != 1)
       std::cerr << "Non Numeric Literal\n";
    else if (!cast && std::strlen(str) == 1)
        cast = str[0];
    if (cast >= 0 && cast <= 127)
    {
        if (std::isprint(cast))
            std::cout << "char: " << static_cast<char>(cast) << "\n";
        else
            std::cout << "char: Not Printable\n";
    }
    if (cast <= INT_MAX && cast >= INT_MIN)
        std::cout << "int: " << static_cast<int>(cast) << "\n";
    else
        std::cout << "int: nan\n";
    if (cast <= std::numeric_limits<float>::max() && cast >= std::numeric_limits<float>::min())
        std::cout << "float: " << static_cast<float>(cast) << "f\n";
    else
        std::cout << "float: nan\n";
     if (cast <= std::numeric_limits<double>::max() && cast >= std::numeric_limits<double>::min())
        std::cout << "double: " << static_cast<double>(cast) << "\n";
    else
        std::cout << "double: nan\n";

}