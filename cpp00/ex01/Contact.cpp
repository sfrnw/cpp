/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:16 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/11 16:23:16 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Setters
void Contact::setFirstName(const std::string& value) {
	firstName = value;
}

void Contact::setLastName(const std::string& value) {
	lastName = value;
}

void Contact::setNickname(const std::string& value) {
	nickname = value;
}

void Contact::setPhoneNumber(const std::string& value) {
	phoneNumber = value;
}

void Contact::setDarkestSecret(const std::string& value) {
	darkestSecret = value;
}

// Getters
const std::string& Contact::getFirstName() const {
	return firstName;
}

const std::string& Contact::getLastName() const {
	return lastName;
}

const std::string& Contact::getNickname() const {
	return nickname;
}

const std::string& Contact::getPhoneNumber() const {
	return phoneNumber;
}

const std::string& Contact::getDarkestSecret() const {
	return darkestSecret;
}

// Validate contact (no empty fields)
bool Contact::isValid() const {
	return !firstName.empty() && !lastName.empty() && !nickname.empty()
		&& !phoneNumber.empty() && !darkestSecret.empty();
}
