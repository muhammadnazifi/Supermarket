#include "bank_account.hpp"

void BankAccount::deposit(double amount) {
    balance->setValue(balance->getValue() + amount);
}
