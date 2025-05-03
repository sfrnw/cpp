/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/03 18:13:46 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "AAnimal Default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
	std::cout << "AAnimal Copy constructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	std::cout << "AAnimal Assignment operator called." << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called." << std::endl;
}

std::string AAnimal::getType() const {
	return type;
}
