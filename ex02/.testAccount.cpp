/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .testAccount.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:52:35 by okraus            #+#    #+#             */
/*   Updated: 2024/05/05 12:27:30 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //st::cout, std::endl
#include <iomanip> //std::setw
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
	std::cout << "displaying account info" << std::endl;
}

//	Constructor
Account::Account(int initial_deposit)
{

	std::cout << "creating account with initial deposit of " << initial_deposit << std::endl;
}

//	Destructor
Account::~Account(void)
{
	std::cout << "closing account" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "making deposit" << deposit << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "making withdrawal" << withdrawal << std::endl;
	return (1);
}

int		Account::checkAmount(void) const
{
	std::cout << "checking amount" << std::endl;
	return (0);
}

void	Account::displayStatus(void) const
{
	std::cout << "displaying status" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::cout << "[timestamp]" << std::endl;
}