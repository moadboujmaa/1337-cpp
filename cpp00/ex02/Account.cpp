/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:42:13 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/18 10:45:56 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit) {
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount += initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit ) {
	int	p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits++;
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	int	p_amount = _amount;
	
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << endl;
	return (true);
}

void Account::_displayTimestamp(void) {
    std::time_t rawtime;
    std::tm* timeinfo;
    char buffer[80];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);

    std::strftime(buffer, 80, "%Y%m%d_%H%M%S", timeinfo);
	cout << "[";
    std::cout << buffer;
	cout << "]";
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << endl;
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

Account::~Account() {
    _displayTimestamp();
	cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << endl;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << endl;
}