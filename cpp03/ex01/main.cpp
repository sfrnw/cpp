/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/26 18:05:46 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main() {
	// Test construction chaining
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
	std::cout << "\n=== Destructing ===" << std::endl;
	return 0;
}

