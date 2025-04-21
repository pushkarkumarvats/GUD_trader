#ifndef MARKETDATA_H
#define MARKETDATA_H

#include <vector>
#include <string>

class MarketData {
public:
    std::vector<double> loadPrices(const std::string& filename);
};

#endif
