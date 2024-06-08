#include <iostream>
#include "Account.h"

Account::Account(int accountNumber, double initialBalance)
    : accountNumber(accountNumber), balance(initialBalance) {}

void Account::deposit(double amount) {
    balance += amount;
    std::cout << "Deposited " << amount << " to account " << accountNumber << ". New balance: " << balance << std::endl;
}

void Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        std::cout << "Withdrew " << amount << " from account " << accountNumber << ". New balance: " << balance << std::endl;
    } else {
        std::cout << "Insufficient funds for withdrawal from account " << accountNumber << "." << std::endl;
    }
}

void Account::display() const {
    std::cout << "Account Number: " << accountNumber << ", Balance: " << balance << std::endl;
}

int Account::getAccountNumber() const {
    return accountNumber;
}

double Account::getBalance() const {
    return balance;
}

