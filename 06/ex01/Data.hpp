#ifndef DATA_HPP
#define DATA_HPP

class Data
{
    int     _data;
    Data(const Data &other);
    const Data &operator=(const Data &other);
    Data();
    ~Data();
};

#endif