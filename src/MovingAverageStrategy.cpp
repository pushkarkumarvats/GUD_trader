#include "MovingAverageStrategy.h"

MovingAverageStrategy::MovingAverageStrategy(int p) : period(p) {}

bool MovingAverageStrategy::shouldBuy(double price) {
    history.push_back(price);
    if (history.size() < period) return false;

    double sum = 0;
    for (int i = history.size() - period; i < history.size(); ++i)
        sum += history[i];

    double avg = sum / period;
    return price > avg;
}

bool MovingAverageStrategy::shouldSell(double price) {
    return false;
}
