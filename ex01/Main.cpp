/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:27:00 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/11 16:27:00 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
	PhoneBook phoneBook;

	while (true) {
		// Prompt user for a command
		std::string command;
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD") {
			phoneBook.addContact();
		} else if (command == "SEARCH") {
			phoneBook.searchContacts();
		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Unknown command. Please try again." << std::endl;
		}

		if (std::cin.eof()) { // Handle EOF gracefully
			break;
		}
	}

	return 0;
}
