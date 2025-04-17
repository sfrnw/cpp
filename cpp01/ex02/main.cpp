/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:45:33 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/17 21:27:31 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip> 

int main() {
    std::string str = "HI THIS IS BRAIN";
	
	//Stores a memory address of another variable.
	//Can be reassigned and supports pointer arithmetic.
    std::string* stringPTR = &str;

	//A reference is an alias for an existing variable (no separate memory allocation).
	//Must be initialized at declaration and cannot be reassigned.
    std::string& stringREF = str;

    // Print memory addresses, should be the same
	std::cout << std::left << std::setw(30) << "Memory address of str: " << &str << std::endl;
	std::cout << std::left << std::setw(30) << "Memory address in stringPTR: " << stringPTR << std::endl;
	std::cout << std::left << std::setw(30) << "Memory address in stringREF: " << &stringREF << std::endl;

    // Print values, should be the same
	std::cout << "\n" << std::left << std::setw(30) << "Value of str: " << str << std::endl;
	std::cout << std::left << std::setw(30) << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << std::left << std::setw(30) << "Value pointed by stringREF: " << stringREF << std::endl;

    return 0;
}
