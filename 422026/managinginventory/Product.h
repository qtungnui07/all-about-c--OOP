#pragma once

#include <iostream>
using namespace std;

class Product {
protected:
    double price;

private:
    int id;

public:
    Product(int id, double price) {
        this->id = id;
        this->price = price;
    }

    int getId() {
        return id;
    }

    double getPrice() {
        return price;
    }

    virtual void display() {
        cout << "ID: " << id << ", Price: " << price << endl;
    }
};


