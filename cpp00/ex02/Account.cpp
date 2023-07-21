//add header

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
}

Account::~Account()
{
}

int	Account::getNbAccounts()
	return (_nBAccounts);

int Account::getTotalAmount()
	return (_totalAmount);

int Account::getNbDeposits()
	return (_nbDeposits);

int Account::getNbWithdrawals()
	return (_NbWithdrawals);

void	Account::displayAccountInfos()
	return(); //????????

void	makeDeposit(int deposit);

bool makeWithdrawal(int withdrawal);
int checkAmount();
void	displayStatus();

void	_displayTimestamp();


