/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:06:36 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/30 21:41:03 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <iostream>

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

int	Account::_displayTimestamp(void)
{
	time_t				rawtime;
	struct tm			*timeinfo;
	std::stringstream	ss;
	std::string			out;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	ss << "[" << (timeinfo->tm_year + 1900);
	ss << (timeinfo->tm_mon + 1);
	ss << timeinfo->tm_mday;
	ss << "_" << (timeinfo->tm_hour + 1) << ":";
	ss << (timeinfo->tm_min + 1) << ":";
	ss << (timeinfo->tm_sec + 1) << "] ";
	ss >> out;
	std::cout << out;
}

int	Account::getNbAccounts(void)
{
	return (this->_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (this->_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (this->_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (this->_totalNbWithdrawals);
}

