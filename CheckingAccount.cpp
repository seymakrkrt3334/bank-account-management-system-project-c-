#include <iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(int accountNumber, double initialBalance)
    : Account(accountNumber, initialBalance) {}

void CheckingAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        std::cout << "Withdrew " << amount << " from checking account " << accountNumber << ". New balance: " << balance << std::endl;
    } else {
        std::cout << "Insufficient funds for withdrawal from checking account " << accountNumber << "." << std::endl;
    }
}

