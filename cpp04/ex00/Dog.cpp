/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/03 17:48:37 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "Dog Default constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog Copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Assignment operator called." << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
