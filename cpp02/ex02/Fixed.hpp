/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:13:08 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/26 14:53:51 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int                 _value;
    static const int    _fractionalBits = 8; 
	
public:
    Fixed();                            // Default constructor
	Fixed(const int value);             // Int constructor
    Fixed(const float value);           // Float constructor
	Fixed(const Fixed& other);          // Copy constructor
    Fixed& operator=(const Fixed& other); // Copy assignment operator
    ~Fixed();                           // Destructor

    int  getRawBits(void) const;
    void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	
	//new
	// Comparison operators
    bool    operator>(const Fixed& other) const;
    bool    operator<(const Fixed& other) const;
    bool    operator>=(const Fixed& other) const;
    bool    operator<=(const Fixed& other) const;
    bool    operator==(const Fixed& other) const;
    bool    operator!=(const Fixed& other) const;

    // Arithmetic operators
    Fixed   operator+(const Fixed& other) const;
    Fixed   operator-(const Fixed& other) const;
    Fixed   operator*(const Fixed& other) const;
    Fixed   operator/(const Fixed& other) const;

    // Increment/decrement operators
    Fixed&  operator++();       // Pre-increment
    Fixed   operator++(int);    // Post-increment
    Fixed&  operator--();       // Pre-decrement
    Fixed   operator--(int);    // Post-decrement

    // Static functions
    static Fixed&       min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed&       max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

// Overload for the << operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif // FIXED_HPP
