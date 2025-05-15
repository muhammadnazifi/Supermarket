#ifndef CURRENCY_HPP
#define CURRENCY_HPP

#include <iostream>
#include <map>

class Currency {
protected:
    double value; // Stores the currency amount
    static std::map<std::string, double> exchangeRates;
public:
    Currency(double v) : value(v) {}

    virtual double convertToUSD() const = 0;

    // Getter method to access value safely
    double getValue() const { return value; }

    // **Fix: Add Setter Method**
    void setValue(double newValue) { value = newValue; }

    virtual ~Currency() = default;
};

#endif // CURRENCY_HPP
