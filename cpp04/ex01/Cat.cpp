/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/03 17:47:32 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	//new
	brain = new Brain();
	//
	std::cout << "Cat Default constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat Copy constructor called." << std::endl;
	//new
	brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Assignment operator called." << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		//new
		delete brain;
		brain = new Brain(*other.brain);
		//
	}
	return *this;
}

Cat::~Cat() {
	//new
	delete brain;
	//
	std::cout << "Cat Destructor called." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}

//new
Brain* Cat::getBrain() const {
	return brain;
}
