#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <iostream>

template <typename T> 
typename std::vector<T>::iterator easyfind(const std::vector<T> &vec, int n)
{
   
    return (std::find(vec.begin(), vec.end(), n));
};
#endif