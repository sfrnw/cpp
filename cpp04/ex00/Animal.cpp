/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/03 17:48:21 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal Default constructor called." << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Animal Copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal Assignment operator called." << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called." << std::endl;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Animal makes a generic animal sound." << std::endl;
}
