#ifndef MOVINGAVERAGESTRATEGY_H
#define MOVINGAVERAGESTRATEGY_H

#include "Strategy.h"
#include <vector>

class MovingAverageStrategy : public Strategy {
private:
    std::vector<double> history;
    int period;

public:
    MovingAverageStrategy(int p = 5);
    bool shouldBuy(double price) override;
    bool shouldSell(double price) override;
};

#endif
