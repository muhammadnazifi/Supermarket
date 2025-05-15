#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>

class Item {
protected:
    std::string name;
    double price;
    int stockQuantity;
public:
    Item(std::string n, double p, int s) : name(n), price(p), stockQuantity(s) {}

    virtual void printItem() const = 0;
    std::string getName() const { return name; }  // Getter function
    virtual ~Item() = default;
};

// Define all item types **only inside item.hpp**
class Fruit : public Item {
public:
    Fruit(std::string n, double p, int s) : Item(n, p, s) {}
    void printItem() const override {
        std::cout << name << " costs " << price << " per kg\n";
    }
};

class Snack : public Item {
public:
    Snack(std::string n, double p, int s) : Item(n, p, s) {}
    void printItem() const override {
        std::cout << name << " costs " << price << " per package\n";
    }
};

class Seasoning : public Item {
public:
    Seasoning(std::string n, double p, int s) : Item(n, p, s) {}
    void printItem() const override {
        std::cout << name << " costs " << price << " per gram\n";
    }
};

#endif // ITEM_HPP
