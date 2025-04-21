#include "Account.h"
#include "MarketOrder.h"
#include "MarketData.h"
#include "MovingAverageStrategy.h"

int main() {
    Account acc("Alice", 10000);
    MarketData data;
    auto prices = data.loadPrices("data/prices.csv");

    Strategy* strat = new MovingAverageStrategy(3);

    for (double price : prices) {
        if (strat->shouldBuy(price)) {
            acc.placeTrade(new MarketOrder("AAPL", 10, price));
        }
    }

    acc.showBalance();
    delete strat;
    return 0;
}
