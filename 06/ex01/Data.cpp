#include "Data.hpp"
#include <cstdlib>
#include <ctime>
Data::Data(const Data &other) {(void)other; }

const Data &Data::operator=(const Data &other) {(void)other; return (*this);}

Data::Data()
{
    std::srand(std::time(0));
    _data = std::rand();
}

Data::~Data(){};