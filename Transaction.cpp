#include <iostream>
#include "Transaction.h"

void Transaction::transfer(Account& from, Account& to, double amount) {
    if (amount <= from.getBalance()) {
        from.withdraw(amount);
        to.deposit(amount);
        std::cout << "Transferred " << amount << " from account " << from.getAccountNumber() << " to account " << to.getAccountNumber() << "." << std::endl;
    } else {
        std::cout << "Insufficient funds for transfer from account " << from.getAccountNumber() << " to account " << to.getAccountNumber() << "." << std::endl;
    }
}

