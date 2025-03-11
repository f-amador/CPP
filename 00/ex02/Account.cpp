/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:21:13 by framador          #+#    #+#             */
/*   Updated: 2025/03/11 20:46:07 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << _nbAccounts << ";amount:" << initial_deposit << ";created\n";
	_nbAccounts++;
	_totalAmount += initial_deposit;
	
}

Account::~Account()
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
	return ;
}
int Account::getNbAccounts()
{
	return _nbAccounts;	
}

int Account::getTotalAmount()
{
	return _totalAmount;	
}
int Account::getNbDeposits()
{
	return _totalNbDeposits;	
}
int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;	
}
void Account::displayAccountsInfos()
{	
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount <<";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";withdrawal:";
	if (withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (1);

	}
	else
		std::cout << "refused\n";
	return (0);
}

int	Account::checkAmount() const 
{
	return _amount;
}
void	Account::displayStatus() const
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}