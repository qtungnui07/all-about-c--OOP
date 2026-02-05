#pragma once

#include "Product.h"

class DigitalProduct : public Product {
private:
    string downloadLink;

public:
    DigitalProduct(int id, double price, string link)
        : Product(id, price) {
        downloadLink = link;
    }

    void applyDiscount(double percent) {
        price = price * (1 - percent / 100);
    }

    void display() override {
        cout << "Digital Product" << endl;
        cout << "Price: " << price << endl;
        cout << "Download link: " << downloadLink << endl;
    }
};
