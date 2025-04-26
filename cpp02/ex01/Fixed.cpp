/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:14:13 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/26 14:53:59 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

//new
//value << 8 shifts the integer 8 bits to the left.
//Representation of integer part at fixed-point
//Formula for integers:
// Fixed-Point Value=Int×256

Fixed::Fixed(const int value) : _value(value << _fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}
//1 << 8 = 256 = 2^8
//Multiply the float by 256 to "scale it up" to the fixed-point range.
//then we round to the nearest whole number for fixed-point.
//Formula for floats:
// Fixed-Point Value=round(Float×256)

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}
//

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = other._value;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other._value;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

// Conversion Back to Float/Int
//_value/256
float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

//Shift right by 8
int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

//<< operator overload
//By default, C++ doesn’t know how to print custom objects
//By providing this function, we teach C++ how to convert 
// bject into something that can be printed
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
//std::ostream is a general-purpose output stream class.
//It is a type that defines the interface and behavior 
//for output streams in C++. You can create your own ostream
// objects to direct output to different destinations, 
//such as files, strings, or even custom devices