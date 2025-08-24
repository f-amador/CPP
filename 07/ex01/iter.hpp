#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cctype>

template <typename T, typename Func>
void iter(T *array, int len, Func f)
{
    if (!array || !f)
        return ;
    for(int i = 0; i < len ; i++)
    {
        f(array[i]);
    }
}

#endif