/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:28:53 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/10 10:52:50 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void){
	time_t now = time(NULL);

	std::cout	<< std::setfill('0') << "["
				<< 1900 + std::localtime(&now)->tm_year
				<< std::setw(2) << 1 + std::localtime(&now)->tm_mon
				<<  std::setw(2) << std::localtime(&now)->tm_mday
				<<  "_"
				<<  std::setw(2) << std::localtime(&now)->tm_hour
				<<  std::setw(2) << std::localtime(&now)->tm_min
				<<  std::setw(2) << std::localtime(&now)->tm_sec
				<< "] " << std::flush;
}

Account::Account(int initial_deposit){
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;
}

int Account::getNbAccounts(void){
	return _nbAccounts;
}

int Account::getTotalAmount(void){
	return _totalAmount;
}

int Account::getNbDeposits(void){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit
				<< ";amount:" << _amount + deposit
				<< ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	bool success = false;

	_displayTimestamp();
	if (_amount > withdrawal) {
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;

		std::cout	<< "index:" << _accountIndex
					<< ";p_amount:" << _amount
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << _amount - withdrawal
					<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;

		_amount -= withdrawal;
		success = true;
	}
	else {
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
	}

	return (success);
}

int Account::checkAmount(void) const{
	return _amount;
}

void Account::displayStatus(void) const{
	// std::cout << "STATUS" << std::endl;
	// return ;

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}
