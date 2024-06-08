#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(int accountNumber, double initialBalance)
    : Account(accountNumber, initialBalance) {}

void SavingsAccount::deposit(double amount) {
    balance += amount + (amount * 0.01); // 1% interest on deposits
    std::cout << "Deposited " << amount << " with interest to savings account " << accountNumber << ". New balance: " << balance << std::endl;
}

void SavingsAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        std::cout << "Withdrew " << amount << " from savings account " << accountNumber << ". New balance: " << balance << std::endl;
    } else {
        std::cout << "Insufficient funds for withdrawal from savings account " << accountNumber << "." << std::endl;
    }
}

