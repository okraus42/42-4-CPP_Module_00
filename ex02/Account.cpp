/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:52:35 by okraus            #+#    #+#             */
/*   Updated: 2024/05/05 13:28:10 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	//st::cout, std::endl
#include <iomanip>	//std::setw std::setfill
#include <ctime>	//std::time std::localtime tm ?
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//	Getters

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
		<< _totalNbWithdrawals << std::endl;
}

//	Constructor
Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";amount:"
	<< this->_amount << ";created" << std::endl;
}

//	Destructor
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";deposit:";
	++_totalNbDeposits;
	++this->_nbDeposits;
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << deposit << ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";withdrawal:";
	if (checkAmount() < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	++_totalNbWithdrawals;
	++this->_nbWithdrawals;
	_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount(void) const
{
	//std::cout << "checking amount" << std::endl;
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t time_now;
	//  std::tm tm{}; // get_time does not set all fields hence {}
    // tm.tm_year = 2020 - 1900; // 2020
    // tm.tm_mon = 7 - 1; // July
    // tm.tm_mday = 15; // 15th
    // tm.tm_hour = 10;
    // tm.tm_min = 15;
	//std::tm tm;
	time_now = std::time(NULL);
	tm tm = *(std::localtime(&time_now));
	std::cout << "["
	<< tm.tm_year + 1900
	<< std::setfill('0') << std::setw(2) << tm.tm_mon + 1
	<< std::setfill('0') << std::setw(2) << tm.tm_mday
	<< "_"
	<< std::setfill('0') << std::setw(2) << tm.tm_hour
	<< std::setfill('0') << std::setw(2) << tm.tm_min
	<< std::setfill('0') << std::setw(2) << tm.tm_sec
	<< "] ";
	//std::cout << std::put_time(std::localtime(&time_now), "%y-%m-%d %OH:%OM:%OS");
}