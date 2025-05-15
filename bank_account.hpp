#ifndef BANK_ACCOUNT_HPP
#define BANK_ACCOUNT_HPP

#include "currency.hpp"

class BankAccount {
private:
    Currency* balance;
public:
    BankAccount(Currency* initialBalance) : balance(initialBalance) {}

    void deposit(double amount); // Only declare here, NO implementation!
    void withdraw(double amount);
    double getBalance() const { return balance->getValue(); }
};

#endif // BANK_ACCOUNT_HPP
