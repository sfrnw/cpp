/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:57:59 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/01 16:22:35 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : 
    ClapTrap("Unnamed_clap_name"),  // Directly initialize ClapTrap
    _name("Unnamed") {
    _hitPoints = FragTrap::_hitPoints;    // 100
    _energyPoints = ScavTrap::_energyPoints;  // 50
    _attackDamage = FragTrap::_attackDamage;  // 30
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : 
    ClapTrap(name + "_clap_name"), 
    _name(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : 
    ClapTrap(other),  // Explicitly copy ClapTrap part
    FragTrap(other), 
    ScavTrap(other),
    _name(other._name) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);  // Copy ClapTrap part
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        _name = other._name;
    }
    std::cout << "DiamondTrap copy assignment called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name 
              << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
