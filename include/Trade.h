#ifndef TRADE_H
#define TRADE_H

#include <string>

class Trade {
protected:
    std::string symbol;
    int quantity;
    double price;

public:
    Trade(std::string sym, int qty, double prc)
        : symbol(sym), quantity(qty), price(prc) {}

    virtual void execute() = 0;
    virtual ~Trade() {}
};

#endif
