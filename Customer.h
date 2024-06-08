#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
#include <string>
#include "Account.h"

class Customer {
private:
    std::string name;
    int customerId;
    std::vector<Account*> accounts;
public:
    Customer(const std::string& name, int customerId);
    void addAccount(Account* account);
    void displayAccounts() const;
    std::string getName() const;
    int getCustomerId() const;
};

#endif // CUSTOMER_H

