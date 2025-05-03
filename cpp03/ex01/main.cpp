/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/01 14:57:47 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main() {
	// Test construction chaining
	// The derived class builds "on top of" the base class.
	// The base must exist before extending it.
	std::cout << "\n=== Constructing ===" << std::endl;
	ScavTrap scav1("SCAV-1");

	// Test functionality
	std::cout << "\n=== Testing ===" << std::endl;
	scav1.attack("Target");
	scav1.guardGate();
	scav1.takeDamage(30);
	scav1.beRepaired(10);

	// Test copy and assignment
	std::cout << "\n=== Copying ===" << std::endl;
	ScavTrap scav2(scav1);
	ScavTrap scav3;
	scav3 = scav2;

	// Test destruction chaining
	// The derived class may depend on base class resources during cleanup.
	// Destroying the base first would leave the derived class with dangling references.
	std::cout << "\n=== Destructing ===" << std::endl;
	return 0;
}

