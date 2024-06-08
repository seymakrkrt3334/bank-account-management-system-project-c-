#include <iostream>
#include "Account.h"
#include "Customer.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "Transaction.h"
#include "Utilities.h"


int main() {
    // Creating customers
    Customer customer1("John Doe", 1);
    Customer customer2("Jane Smith", 2);

    // Creating accounts
    SavingsAccount savingsAccount1(101, 1000.0);
    CheckingAccount checkingAccount1(102, 2000.0);

    // Linking accounts to customers
    customer1.addAccount(&savingsAccount1);
    customer2.addAccount(&checkingAccount1);

    // Performing transactions
    savingsAccount1.deposit(500.0);
    checkingAccount1.withdraw(300.0);

    // Displaying account details
    customer1.displayAccounts();
    customer2.displayAccounts();

    return 0;
}

