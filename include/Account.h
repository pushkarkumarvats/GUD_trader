#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>
#include "Trade.h"

class Account {
private:
    std::string owner;
    double balance;
    std::vector<Trade*> history;

public:
    Account(std::string name, double initialBalance);
    void deposit(double amount);
    bool placeTrade(Trade* trade);
    void showBalance();
    ~Account();
};

#endif
