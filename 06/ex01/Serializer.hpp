#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"

# ifndef uintptr_t
#  define uintptr_t unsigned long
# endif

class Serializer
{
        Serializer(const Serializer &other);
        const Serializer &operator=(const Serializer &other);
        Serializer();
        ~Serializer();

    public:

        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif