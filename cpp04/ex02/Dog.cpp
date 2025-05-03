/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/03 18:13:05 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	//new
	brain = new Brain();
	//
	std::cout << "Dog Default constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other) {
	std::cout << "Dog Copy constructor called." << std::endl;
	//new
	brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Assignment operator called." << std::endl;
	if (this != &other) {
		AAnimal::operator=(other);
		//new
		delete brain;
		brain = new Brain(*other.brain);
		//
	}
	return *this;
}

Dog::~Dog() {
	//new
	delete brain;
	//
	std::cout << "Dog Destructor called." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

//new
Brain* Dog::getBrain() const {
	return brain;
}

