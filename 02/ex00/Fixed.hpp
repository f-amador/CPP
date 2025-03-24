/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:20:46 by framador          #+#    #+#             */
/*   Updated: 2025/03/24 18:48:13 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    int _point;
    static const int _bits;
    
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &a);
        const int &getRawBits();
        Fixed &operator=(const Fixed &other);
        void setRawBits(int _point);
};

#endif
