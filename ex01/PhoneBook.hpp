/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:24:34 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/11 16:24:34 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook {
private:
	static const int MAX_CONTACTS = 8; // Maximum number of contacts
	Contact contacts[MAX_CONTACTS];   // Array to store contacts
	int contactCount;                 // Number of stored contacts

public:
	PhoneBook();

	void addContact();
	void searchContacts() const;

private:
	void displayContactsList() const; // Helper function to display the list of contacts
};

#endif
