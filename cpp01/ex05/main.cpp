/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:58:15 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/24 20:00:50 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;
    
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", "UNKNOWN"};
    for (size_t i = 0; i < 5; ++i) {
        std::cout << "Testing level: " << levels[i] << std::endl;
        harl.complain(levels[i]);
        std::cout << std::endl;
    }
    return 0;
}
