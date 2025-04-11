/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:01 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/11 16:23:01 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

// Encapsulation is a fundamental concept of Object-Oriented Programming (OOP).
// It involves bundling data (attributes) and methods (functions) together within
// a class, restricting direct access to some components.
class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	// Setters
	void setFirstName(const std::string& value);
	void setLastName(const std::string& value);
	void setNickname(const std::string& value);
	void setPhoneNumber(const std::string& value);
	void setDarkestSecret(const std::string& value);

	// Getters
	const std::string& getFirstName() const;
	const std::string& getLastName() const;
	const std::string& getNickname() const;
	const std::string& getPhoneNumber() const;
	const std::string& getDarkestSecret() const;

	// Check if contact is valid (no empty fields)
	bool isValid() const;
};

#endif
