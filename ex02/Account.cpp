#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"


int  Account::_nbAccounts = 0;
int  Account::_totalAmount = 0;
int  Account::_totalNbDeposits = 0;
int  Account::_totalNbWithdrawals = 0;

Account::Account( void ) : 
            _accountIndex(_nbAccounts),
            _amount(0),
            _nbDeposits(0),
            _nbWithdrawals(0) {
    _nbAccounts++;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";created" << std::endl;
    return ;
}

Account::Account( int initial_deposit ) : 
            _accountIndex(_nbAccounts),
            _amount(initial_deposit),
            _nbDeposits(0),
            _nbWithdrawals(0) {
    _nbAccounts++;
    _totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";created" << std::endl;
    return ;
}

Account::~Account( void ) {
    _nbAccounts--;
    _totalAmount -= this->_amount;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";closed" << std::endl;
    return ;
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

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    if (deposit > 0)
    {
        Account::_displayTimestamp();
        std::cout << " index:" << this->_accountIndex;
        std::cout << ";p_amount:" << this->_amount;
        std::cout << ";deposit:";
        this->_amount += deposit;
        this->_nbDeposits++;
        _totalNbDeposits++;
        _totalAmount += deposit;
        std::cout << deposit;
        std::cout << ";amount:" << this->_amount;
        std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
    }
    else
        std::cout << "Error : Need positive deposite" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (withdrawal > 0)
    {
        Account::_displayTimestamp();
        std::cout << " index:" << this->_accountIndex;
        std::cout << ";p_amount:" << this->_amount;
        std::cout << ";withdrawal:";
        if (checkAmount() - withdrawal < 0)
        {
            std::cout << "refused" << std::endl;
            return (false);
        }
        else
        {
            this->_amount -= withdrawal;
            this->_nbWithdrawals++;
            _totalNbWithdrawals++;
            _totalAmount -= withdrawal;
            std::cout << withdrawal;
            std::cout << ";amount:" << this->_amount;
            std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
            return (true);
        }
    }
    else
        std::cout << "Error : Need positive withdrawal" << std::endl;
    return (false);

}

int		Account::checkAmount( void ) const {
    return (this->_amount);
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp( void ) {
    std::time_t now = std::time(NULL);
    std::tm*            pnow;

    pnow = gmtime(&now);
    std::cout << "[" << std::put_time(pnow, "%Y%m%d_%H%M%S") << "]";
    // std::cout << "[" << "19920104_091532" << "]";
}