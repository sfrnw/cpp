/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:05:26 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/17 19:27:41 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//default constructor that takes no arguments. it is required for an array allocation,
//becaue the compiler cannot guess parameters for object initialization in arrays
//it initializes name to an empty string as a placeholder.

Zombie::Zombie() : name("") {}

Zombie::Zombie(std::string name) : name(name) {}
Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed." << std::endl;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//Public method to modify a private member. Allows setting the name after object creation
//(necessary because array-allocated Zombies are initialized with the default constructor).
void Zombie::setName(std::string name) {
    this->name = name;
}