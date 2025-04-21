#include "MarketData.h"
#include <fstream>
#include <sstream>

std::vector<double> MarketData::loadPrices(const std::string& filename) {
    std::vector<double> prices;
    std::ifstream file(filename);
    std::string line;

    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string timestamp;
        double price;
        getline(ss, timestamp, ',');
        ss >> price;
        prices.push_back(price);
    }

    return prices;
}
