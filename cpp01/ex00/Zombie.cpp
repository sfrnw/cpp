/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:05:26 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/16 17:41:56 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//The : name(name) is an initializer list that sets the name attribute.
Zombie::Zombie(std::string name) : name(name) {
}

//Destructor
// A special function called when an object is destroyed (goes out of scope or is deleted).
// Used to clean up resources.
Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed." << std::endl;
}

//The const at the end means this function does not modify the object.
void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
