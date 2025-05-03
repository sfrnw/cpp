/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/03 18:08:46 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	// Test 1: Basic allocation/deallocation
	std::cout << "----- Test 1: Basic -----" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	delete dog;
	delete cat;

	// Test 2: Array of animals
	std::cout << "\n----- Test 2: Array -----" << std::endl;
	const int numAnimals = 4;
	Animal* animals[numAnimals];

	for (int i = 0; i < numAnimals/2; i++)
		animals[i] = new Dog();
	for (int i = numAnimals/2; i < numAnimals; i++)
		animals[i] = new Cat();

	for (int i = 0; i < numAnimals; i++)
		delete animals[i];

	// Test 3: Deep copy verification
	//A deep copy means creating a completely independent copy of an object,
	// including all objects or data it refers to.
	// In a deep copy, not only are the object's own values duplicated,
	// but any referenced objects are also recursively copied. 
	std::cout << "\n----- Test 3: Deep Copy -----" << std::endl;
	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "I love bones");

	Dog copiedDog(originalDog);
	// If the copy is deep, this change will only affect copiedDog's brain.
    // If the copy is shallow, this change will also affect originalDog's brain.
	//copiedDog.getBrain()->setIdea(0, "Lets bark!");

	std::cout << "Original Dog's idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Dog's idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;

	return 0;
}

