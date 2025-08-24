#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ){
	time_t	current_time = time(NULL);
	struct tm* local_time = localtime(&current_time);
	std::cout << "[" << local_time->tm_year + 1900  // years since 1900
			<< local_time->tm_mon + 1      // months since January (0-11)
			<< local_time->tm_mday << "_"
			<< local_time->tm_hour
			<< local_time->tm_min
			<< local_time->tm_sec << "]";
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"; 
	std::cout << "total:" << _totalAmount << ";"; 
	std::cout << "diposits:" << _totalNbDeposits << ";"; 
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl; 
}

void	Account::makeDeposit( int deposit ){
	_nbDeposits += 1;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"; 
	std::cout << "p_amount:" << _amount - deposit << ";"; 
	std::cout << "deposit:" << deposit << ";"; 
	std::cout << "amount::" << _amount << ";"; 
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	if (withdrawal > _amount)
		return (false);
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"; 
	std::cout << "p_amount:" << _amount + withdrawal << ";"; 
	std::cout << "withdrawal:" << withdrawal << ";"; 
	std::cout << "amount::" << _amount << ";"; 
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void )const{
	return (_amount);
}

void	Account::displayStatus( void )const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"; 
	std::cout << "amount:" << _amount << ";"; 
	std::cout << "deposits:" << _nbDeposits << ";"; 
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl; 
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}