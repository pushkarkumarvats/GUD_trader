#include "Account.h"
#include <iostream>

Account::Account(std::string name, double initialBalance)
    : owner(name), balance(initialBalance) {}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::placeTrade(Trade* trade) {
    if (balance >= 1000) {  // Placeholder check
        trade->execute();
        history.push_back(trade);
        balance -= 1000;
        return true;
    } else {
        std::cout << "Not enough balance!" << std::endl;
        delete trade;
        return false;
    }
}

void Account::showBalance() {
    std::cout << "Balance: $" << balance << std::endl;
}

Account::~Account() {
    for (auto t : history)
        delete t;
}
