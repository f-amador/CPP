#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};

ScalarConverter::~ScalarConverter(){};

ScalarConverter::ScalarConverter(const ScalarConverter &other) {(void)other;}

const ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {(void)other; return(*this);}

bool ScalarConverter::parser(const char *str)
{
    if(!std::strncmp(str, "-inf", 4))
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
    else if(!std::strncmp(str, "+inf", 4))
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
    else if(!std::strncmp(str, "nan", 3))
        std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
    else
        return(0);
    return(1);
}

void ScalarConverter::convert(const char *str)
{
    double cast;

    if (ScalarConverter::parser(str))
        return ;
    cast = std::atof(str);
    if (!cast && std::strlen(str) != 0 && std::strlen(str) != 1)
    {
        std::cerr << "Non Numeric Literal\n";
        return ;
    }
    else if (!cast && std::strlen(str) == 1)
        cast = str[0];
    if (cast >= 0 && cast <= 127)
    {
        if (std::isprint(cast))
            std::cout << "char: '" << static_cast<char>(cast) << "'\n";
        else
            std::cout << "char: Not Printable\n";
    }
    else
        std::cout << "char: impossible\n";
    if (cast <= INT_MAX && cast >= INT_MIN)
        std::cout << "int: " << static_cast<int>(cast) << "\n";
    else
        std::cout << "int: nan\n";
    if (cast <= std::numeric_limits<float>::max() && cast >= -std::numeric_limits<float>::max())
        std::cout << "float: " << static_cast<float>(cast) << "f\n";
    else
        std::cout << "float: nanf\n";
     if (cast <= std::numeric_limits<double>::max() && cast >= -std::numeric_limits<double>::max())
        std::cout << "double: " << static_cast<double>(cast) << "\n";
    else
        std::cout << "double: nan\n";

}