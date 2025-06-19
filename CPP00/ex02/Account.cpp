/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:24:13 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 12:30:06 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <sstream>

static std::string intToString(int value) {
	std::ostringstream oss;
	oss << value;
	return oss.str();
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ){
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << " accounts:" << intToString(getNbAccounts()) << ";total:" << intToString(getTotalAmount())
			<< ";deposits:" << intToString(getNbDeposits()) << ";withdrawals:" << intToString(getNbWithdrawals()) << std::endl;
}

Account::Account( int initial_deposit ){
	Account::_accountIndex = _nbAccounts;
	Account::_amount = initial_deposit;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << intToString(_accountIndex) << ";amount:" << intToString(_amount) << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += Account::_amount;
}

Account::~Account( void ){
	Account::_displayTimestamp();
	std::cout << " index:" << intToString(_accountIndex) << ";amount:" << intToString(_amount) << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	std::cout << " index:" << intToString(_accountIndex) << ";p_amount:" << intToString(this->checkAmount());
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";deposit:" << intToString(deposit) << ";amount:" << intToString(this->checkAmount())
			<< ";nb_deposits:" << intToString(this->_nbDeposits) << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	std::cout << " index:" << intToString(_accountIndex) << ";p_amount:" << intToString(this->checkAmount());
	if (withdrawal > this->checkAmount())
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << intToString(withdrawal) << ";amount:" << intToString(this->checkAmount())
			<< ";nb_withdrawals:" << intToString(this->_nbWithdrawals) << std::endl;
	return true;
}

int		Account::checkAmount( void ) const{
	return this->_amount;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << " index:" << intToString(_accountIndex) << ";amount:" << intToString(this->checkAmount())
			<< ";deposits:" << intToString(this->_nbDeposits) << ";withdrawals:" << intToString(this->_nbWithdrawals) << std::endl;
}

void	Account::_displayTimestamp( void ){
	char buff[20];
	time_t now = time(NULL);
	strftime(buff, 18, "%Y%m%d_%H%M%S", localtime(&now));
	std::cout << "[" <<buff << "]";
}
