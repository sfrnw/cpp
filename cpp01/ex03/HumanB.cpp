/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:21 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/18 19:37:05 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& newWeapon) {
	weapon = &newWeapon;
}

void HumanB::attack() const {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
