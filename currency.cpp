#include "currency.hpp"

std::map<std::string, double> Currency::exchangeRates = {
    {"USD", 1.0},
    {"EUR", 1.1},
    {"IRR", 0.000024}
};

// Derived classes for specific currencies
class USD : public Currency {
public:
    USD(double v) : Currency(v) {}
    double convertToUSD() const override { return value; }
};

class EUR : public Currency {
public:
    EUR(double v) : Currency(v) {}
    double convertToUSD() const override { return value * exchangeRates["EUR"]; }
};

class IRR : public Currency {
public:
    IRR(double v) : Currency(v) {}
    double convertToUSD() const override { return value * exchangeRates["IRR"]; }
};
