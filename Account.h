#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;
public:
    Account(int accountNumber, double initialBalance):accountNumber(accountNumber),initialBalance(initialBalance){
	}
    virtual void deposit(double amount){
    	balance+=amount;
    	cout<<"Deposit "<<amount<<" to accept "<<accountNumber<<" .New balance: "<<balance<<endl;
	}
    virtual void withdraw(double amount){
    	if(balance<=amount){
    		balance-=amount;
    		cout<<"Withdrew "<<amount<<" from account "<<accountNumber<<" .New balance: "<<<balance<<endl;
		}
		else{
			cout<<"Insufficient funds for withdrawal from account "<<accountNumber<<"."<<endl;
		}
	}
    virtual void display() const{
	cout<<"Account number: "<<accountNumber<<" balance: "<<balance<<endl;
	}
    int getAccountNumber() const{
	
	return accountNumber;
	}
    double getBalance() const{
	return balance;
	}
};

#endif // ACCOUNT_H

