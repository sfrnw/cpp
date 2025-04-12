/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:09:20 by asafrono          #+#    #+#             */
/*   Updated: 2025/04/12 17:06:14 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
// for output
#include <iostream>
//  for formatting
#include <iomanip>
// for time-related functions
#include <ctime>

// Static member initialization
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

// Destructor
// A destructor is a special member function in a class that is automatically 
// called when an object of that class is destroyed or goes out of scope.
// Its main purpose is to release resources that the object may have acquired 
// during its lifetime, such as dynamically allocated memory.
// It takes no arguments and has no return type.
Account::~Account() {
	// Display account deletion log
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
			<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
			<< ";deposit:" << deposit;

	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
			<< ";withdrawal:";
	
	if (withdrawal > _amount) {
		std::cout << "refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout << withdrawal 
			<< ";amount:" << _amount 
			<< ";nb_withdrawals:" << _nbWithdrawals 
			<< std::endl;

	return true;
}

void Account::_displayTimestamp() {
	std::time_t currentTime = std::time(0);   // Get current time
	std::tm* now = std::localtime(&currentTime); // Convert to local time

	char timestamp[18];
	std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S] ", now);
	timestamp[17] = '\0';  // Ensure null termination
	std::cout << timestamp;
}

