#include <iostream>
#include "item.hpp"
#include "shopping_cart.hpp"

int main() {
    Fruit apple("Apple", 2.5, 100);
    Snack chips("Potato Chips", 3.0, 50);
    Seasoning salt("Salt", 0.5, 200);

    ShoppingCart cart;
    cart.addItem(&apple);
    cart.addItem(&chips);
    cart.addItem(&salt);

    std::cout << "\nFinal Receipt:\n";
    cart.printReceipt();

    return 0;
}
