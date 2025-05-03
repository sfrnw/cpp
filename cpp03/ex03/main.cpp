/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/01 16:38:42 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

void test_construction_destruction() {
    std::cout << "\n=== Construction/Destruction Test ===" << std::endl;
    DiamondTrap defaultDiamond;
    DiamondTrap namedDiamond("Sparky");
}

void test_attack_energy() {
    std::cout << "\n=== Attack/Energy Test ===" << std::endl;
    DiamondTrap diamond("Warrior");
    
    for (int i = 0; i < 52; i++) {
        std::cout << i+1 << ": ";
        diamond.attack("Target");
    }
}

void test_high_fives_and_gate() {
    std::cout << "\n=== Special Abilities Test ===" << std::endl;
    DiamondTrap diamond("Guardian");

    diamond.highFivesGuys();
    diamond.guardGate();
}

void test_repair_damage() {
    std::cout << "\n=== Repair/Damage Test ===" << std::endl;
    DiamondTrap diamond("Survivor");

    diamond.takeDamage(99);
    diamond.beRepaired(50);
    diamond.takeDamage(100);
    diamond.beRepaired(200);
}

void test_copy_operations() {
    std::cout << "\n=== Copy Operations Test ===" << std::endl;
    DiamondTrap original("Original");
    DiamondTrap copy(original);
    DiamondTrap assigned;

    assigned = original;
    original.whoAmI();
    copy.whoAmI();
    assigned.whoAmI();
}

void test_deep_inheritance() {
    std::cout << "\n=== Deep Inheritance Test ===" << std::endl;
    DiamondTrap diamond("Ultimate");

    // Verify inheritance from both parents
    diamond.highFivesGuys();  // From FragTrap
    diamond.guardGate();      // From ScavTrap
    diamond.whoAmI();         // Unique to DiamondTrap
}

int main() {
    test_construction_destruction();
    test_attack_energy();
    test_high_fives_and_gate();
    test_repair_damage();
    test_copy_operations();
    test_deep_inheritance();
    
    std::cout << "\n=== Final Check ===" << std::endl;
    return 0;
}

