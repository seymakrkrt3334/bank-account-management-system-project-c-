#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount(int accountNumber, double initialBalance);
    void deposit(double amount) override;
    void withdraw(double amount) override;
};

#endif // SAVINGSACCOUNT_H

