/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:20:46 by framador          #+#    #+#             */
/*   Updated: 2025/04/15 14:53:27 by framador         ###   ########.fr       */
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
        Fixed &operator=(const Fixed &other);
		
        int getRawBits() const;
        void setRawBits(int const raw);
    };

#endif
