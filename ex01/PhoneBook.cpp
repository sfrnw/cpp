	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2025/04/11 16:25:28 by asafrono          #+#    #+#             */
	/*   Updated: 2025/04/11 16:25:28 by asafrono         ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits> // Added for std::numeric_limits

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact() {
	Contact newContact;
	std::string input;

	// Prompt user for contact information
	std::cout << "Enter First Name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	newContact.setNickname(input);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);

	// Validate contact fields
	if (!newContact.isValid()) {
		std::cout << "Error: All fields must be filled out!" << std::endl;
		return;
	}

	// Add contact to phonebook
	if (contactCount < MAX_CONTACTS) {
		contacts[contactCount] = newContact;
		contactCount++;
	} else {
		// Replace the oldest contact
		for (int i = 1; i < MAX_CONTACTS; i++) {
			contacts[i - 1] = contacts[i];
		}
		contacts[MAX_CONTACTS - 1] = newContact;
		std::cout << "Phonebook is full. The oldest contact has been replaced." << std::endl;
	}
}

void PhoneBook::searchContacts() const {
	if (contactCount == 0) {
		std::cout << "Phonebook is empty!" << std::endl;
		return;
	}

	displayContactsList();

	// Prompt user for index
	int index;
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;

	if (std::cin.fail() || index < 0 || index >= contactCount) {
		std::cin.clear(); // Clear error flags
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
		std::cout << "Invalid index!" << std::endl;
		return;
	}

	// Display selected contact details
	const Contact& contact = contacts[index];
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::displayContactsList() const {
	// Display header
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << "|" << std::endl;

	// Display each contact
	for (int i = 0; i < contactCount; i++) {
		const Contact& contact = contacts[i];
		auto truncate = [](const std::string& str) -> std::string {
			return str.length() > 10 ? str.substr(0, 9) + "." : str;
		};

		std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << truncate(contact.getFirstName()) << "|"
				<< std::setw(10) << truncate(contact.getLastName()) << "|"
				<< std::setw(10) << truncate(contact.getNickname())
				<< "|"
				<< "\n";
	}
}
