#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Account.h"

class Transaction {
public:
    static void transfer(Account& from, Account& to, double amount);
};

#endif // TRANSACTION_H

