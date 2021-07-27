#include <iostream>
#include "Account.h"

Account::Account (int amount) {
    setBalance(amount);
}

void Account::setBalance(int amount) {
    if (amount < 0) {
        std::cerr << "Invalid amount to start account.\n"
                  << "Setting account balance to zero.\n" << std::endl;
        balance = 0;
    }
    else
        balance = amount;
}

void Account::credit(int amount) {
    if (amount < 0)
        std::cerr << "Cannot add negative money to account." << std::endl;
    else
        balance += amount;
}

int Account::debit(int amount) {
    if (amount < 0)
        std::cerr << "Cannot retrieve negative money from account." << std::endl;
    else if (balance - amount < 0 )
        std::cerr << "Cannot withdraw more money than account holds." << std::endl;
    else
        balance -= amount;
    return getBalance();
}

int Account::getBalance() const {
    return balance;
}