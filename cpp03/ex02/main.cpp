/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/01 15:05:13 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
    std::cout << "\n=== FragTrap Construction ===" << std::endl;
    FragTrap frag1("FRAG-1");

    std::cout << "\n=== FragTrap Actions ===" << std::endl;
    frag1.attack("Target");
    frag1.highFivesGuys();
    frag1.takeDamage(40);
    frag1.beRepaired(25);

    std::cout << "\n=== FragTrap Copying ===" << std::endl;
    FragTrap frag2(frag1);
    FragTrap frag3;
    frag3 = frag2;

    std::cout << "\n=== ScavTrap Construction ===" << std::endl;
    ScavTrap scav1("SCAV-1");
    scav1.attack("Another Target");
    scav1.guardGate();

    std::cout << "\n=== Destruction ===" << std::endl;
    return 0;
}


