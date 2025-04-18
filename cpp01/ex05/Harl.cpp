/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:15 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/18 20:39:20 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

// Define complaint functions
void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

// Initialize static member
Harl::ComplaintLevel Harl::levels[4] = {
    {"DEBUG", &Harl::debug},
    {"INFO", &Harl::info},
    {"WARNING", &Harl::warning},
    {"ERROR", &Harl::error}
};

void Harl::complain(std::string level) {
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i].name) {
            (this->*levels[i].function)();
            return;
        }
    }
    std::cerr << "Unknown complaint level: " << level << std::endl;
}
