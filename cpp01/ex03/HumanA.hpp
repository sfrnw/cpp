/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:23 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/18 19:37:04 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
private:
	std::string name;
	// Reference (must be initialized)
	Weapon& weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	void attack() const;
};

#endif


