/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:21:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/05/01 14:51:41 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap clap1("CLAP-1");
    ClapTrap clap2("CLAP-2");

    clap1.attack("CLAP-2");
    clap2.takeDamage(5);
    clap2.beRepaired(3);

    for (int i = 0; i < 10; i++)
        clap1.attack("CLAP-2");

    clap2.takeDamage(10);
    clap2.beRepaired(5);
    
    return 0;
}

