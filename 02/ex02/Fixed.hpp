/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:20:46 by framador          #+#    #+#             */
/*   Updated: 2025/03/25 15:51:43 by framador         ###   ########.fr       */
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
        
        Fixed &operator=(const Fixed &other);
        
        const int   &getRawBits();
        void        setRawBits(int _point);
        float       toFloat(void) const;
        int         toInt(void) const;      

        bool 	operator<(const Fixed &other) const;
        bool 	operator<=(const Fixed &other) const;
        bool 	operator>(const Fixed &other) const;
        bool 	operator>=(const Fixed &other) const;
        bool 	operator!=(const Fixed &other) const;
        bool 	operator==(const Fixed &other) const;

        Fixed		operator+(const Fixed &other);
        Fixed		operator-(const Fixed &other);
        Fixed		operator/(const Fixed &other);
        Fixed		operator*(const Fixed &other);

		Fixed		&operator++(void);
		Fixed		&operator--(void);
		Fixed		operator++(int);
		Fixed		operator--(int);
		
		static const Fixed		&max(const Fixed &a, const Fixed &b);
		static Fixed		&min(const Fixed &a, const Fixed &b);
		
        
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);



#endif
