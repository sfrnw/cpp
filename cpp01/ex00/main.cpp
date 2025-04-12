/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:08:30 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/12 18:08:31 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Function prototypes for external functions
Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    // Create a zombie on the heap using newZombie()
    Zombie* heapZombie = newZombie("HeapZ");
    heapZombie->announce();

    // Destroy the heap zombie manually to avoid memory leaks
    delete heapZombie;

    // Create a zombie on the stack using randomChump()
    randomChump("StackZ");

    return 0;
}
