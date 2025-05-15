#include "shopping_cart.hpp"
#include <iostream>

void ShoppingCart::addItem(Item* item) {
    cart[item]++;
}

void ShoppingCart::printReceipt() const {
    std::cout << "Receipt:\n";
    for (const auto& [item, quantity] : cart) {
        std::cout << item->getName() << ": " << quantity << " units\n";  // Using getName()
    }
}
