/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:08:11 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/16 17:27:43 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Heap allocation: Zombie* z = new Zombie(name); (must be deleted manually: delete z;)

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
