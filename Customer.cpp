#include <iostream>
#include "Customer.h"


Customer::Customer(const std::string& name, int customerId)
    : name(name), customerId(customerId) {}

void Customer::addAccount(Account* account) {
    accounts.push_back(account);
}

void Customer::displayAccounts() const {
    std::cout << "Customer: " << name << " (ID: " << customerId << ")" << std::endl;
    for (const auto& account : accounts) {
        account->display();
    }
}

std::string Customer::getName() const {
    return name;
}

int Customer::getCustomerId() const {
    return customerId;
}

