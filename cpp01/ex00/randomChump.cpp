/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:07:49 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/16 17:41:54 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Stack allocation: Zombie stackZombie(name); (object destroyed automatically at end of scope)

void randomChump(std::string name) {
    Zombie stackZombie(name);
    stackZombie.announce();
}
