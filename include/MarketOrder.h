#ifndef MARKETORDER_H
#define MARKETORDER_H

#include "Trade.h"
#include <iostream>

class MarketOrder : public Trade {
public:
    MarketOrder(std::string sym, int qty, double prc)
        : Trade(sym, qty, prc) {}

    void execute() override {
        std::cout << "Executed Market Order: " << quantity << " shares of " << symbol
                  << " at $" << price << std::endl;
    }
};

#endif
