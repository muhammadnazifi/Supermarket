#ifndef SHOPPING_CART_HPP
#define SHOPPING_CART_HPP

#include "item.hpp"
#include <map>

class ShoppingCart {
private:
    std::map<Item*, int> cart;
public:
    void addItem(Item* item);
    void printReceipt() const;  // Declaration only
};

#endif // SHOPPING_CART_HPP
