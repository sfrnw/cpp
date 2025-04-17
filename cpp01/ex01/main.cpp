/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:08:30 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/17 19:23:02 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZ");
    if (!horde) {
        std::cout << "Failed to create horde." << std::endl;
        return 1;
    }
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }
	//deleting an arrray of zombies
    delete[] horde;
    return 0;
}
