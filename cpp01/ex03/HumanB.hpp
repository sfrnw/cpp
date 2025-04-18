/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:18 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/18 19:37:06 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
private:
	std::string name;
 	//Pointer (can be null)
	Weapon* weapon;
public:
	HumanB(std::string name);
	void setWeapon(Weapon& newWeapon);
	void attack() const;
};

#endif
