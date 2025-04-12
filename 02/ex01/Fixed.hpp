/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:20:46 by framador          #+#    #+#             */
/*   Updated: 2025/04/10 15:38:28 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
    int _point;
    static const int _bits = 8;
    
    public:
        Fixed();
        ~Fixed();
        Fixed(const int point);
        Fixed(const float value);
        Fixed(const Fixed &copy);
        
        const int &getRawBits();
        Fixed &operator=(const Fixed &other);
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;      
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
