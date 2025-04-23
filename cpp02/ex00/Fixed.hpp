/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:13:08 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/23 20:32:35 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _value;
    static const int    _fractionalBits = 8;

public:
    Fixed();                            // Default constructor
    Fixed(const Fixed& other);          // Copy constructor
    Fixed& operator=(const Fixed& other); // Copy assignment operator
    ~Fixed();                           // Destructor

    int  getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif // FIXED_HPP
