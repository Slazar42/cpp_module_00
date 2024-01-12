/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:16 by slazar            #+#    #+#             */
/*   Updated: 2023/10/19 14:05:34 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;

int	Account::_totalNbWithdrawals = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalAmount = 0;

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";created\n";
	_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed\n";
	_nbAccounts--;
}

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

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::_displayTimestamp(void)
{
	time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	std::cout << withdrawal << ";amount:" << checkAmount() - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	return (true);
}