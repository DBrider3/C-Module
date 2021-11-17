#include <iostream>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	_displayTimestamp();

	_amount = initial_deposit;
	std::cout << "index:" << _nbAccounts++ << ";amount:" << _amount << ";created" <<std::endl;

}

Account::~Account(void){}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

//int Account::getTotalAmount(void)
//{
//	return (_totalAmount);
//}

//int Account::getNbDeposits(void)
//{
//	return (_totalNbDeposits);
//}

//int Account::getNbWithdrawals(void)
//{
//	return (_totalNbWithdrawals);
//}

//void Account::displayAccountsInfos(void)
//{

//}

//void Account::makeDeposit(int deposit)
//{

//}

//bool Account::makeWithdrawal(int withdrawl)
//{

//}

//int Account::checkAmount(void) const
//{

//}

//void Account::displayStatus(void) const
//{

//}

void Account::_displayTimestamp(void)
{
	time_t rawtime;
	char buf[18];

	time(&rawtime);
	strftime(buf, 18, "[%Y%m%d_%H%M%S]", localtime(&rawtime));
	std::cout << buf;
}
