/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:33:48 by almichel          #+#    #+#             */
/*   Updated: 2024/07/10 20:05:38 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) 
    : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) 
{
    _accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account() {}

int Account::getNbAccounts(void)
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

void Account:: displayAccountsInfos(void)
{
	std::cout <<  "Account number : " << Account::getNbAccounts() << '\n';
	std::cout <<  "Total amount : " << Account::getTotalAmount() << '\n';
	std::cout <<  "Total number of deposits : " << Account::getNbDeposits() << '\n';
	std::cout <<  "Total number of withrawals : " << Account::getNbWithdrawals() << '\n';
}
