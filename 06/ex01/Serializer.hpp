#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"

# ifndef uintptr_t
#  define uintptr_t unsigned long
# endif

class Serializer
{
    private:
        Serializer(const Serializer &other);
        const Serializer &operator=(const Serializer &other);

    public:
        Serializer();
        ~Serializer();

        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif