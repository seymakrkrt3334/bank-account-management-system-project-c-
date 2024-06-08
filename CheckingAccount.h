#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
public:
    CheckingAccount(int accountNumber, double initialBalance):accountNumber(accountNumber),initialBalance(initialBalance){
	}
    void withdraw(double amount) override{
	if(balance>=amount){
		balance-=amount;
		cout<<"Withdrew "<<amount<<" from account"<<accountNumber<<" .New balance"<<balance<<endl;
	}
	else {
        std::cout << "Insufficient funds for withdrawal from checking account " << accountNumber << "." <<endl;
    }
	}
};

#endif // CHECKINGACCOUNT_H

