#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <limits>
class ScalarConverter
{
    ScalarConverter(const ScalarConverter &other);
    const   ScalarConverter &operator=(ScalarConverter &other);
    void    parser(const char *str);
    public:
        ScalarConverter();
        ~ScalarConverter();
        static void convert(const char *str);

};

#endif