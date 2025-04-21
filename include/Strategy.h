#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy {
public:
    virtual bool shouldBuy(double price) = 0;
    virtual bool shouldSell(double price) = 0;
    virtual ~Strategy() {}
};

#endif
