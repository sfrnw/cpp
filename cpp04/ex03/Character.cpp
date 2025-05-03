/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/03 19:11:53 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const & name) : name(name) {
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(const Character& other) : name(other.name) {
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	copyInventory(other);
}

Character& Character::operator=(const Character& other) {
	if (this != &other) {
		name = other.name;
		clearInventory();
		copyInventory(other);
	}
	return *this;
}

Character::~Character() {
	clearInventory();
}

void Character::clearInventory() {
	for (int i = 0; i < 4; ++i) {
		if (inventory[i]) {
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
}

void Character::copyInventory(const Character& other) {
	for (int i = 0; i < 4; ++i) {
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; ++i) {
		if (!inventory[i]) {
			inventory[i] = m;
			return;
		}
	}
	// Inventory full, do nothing
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || !inventory[idx])
		return;
	// Do not delete, just remove from inventory
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4 || !inventory[idx])
		return;
	inventory[idx]->use(target);
}
