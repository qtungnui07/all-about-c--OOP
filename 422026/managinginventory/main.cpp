#include <iostream>
#include "DigitalProduct.h"
using namespace std;

int main() {
    DigitalProduct ebook(101, 200.0, "https://download-ebook.com");

    cout << "Before discount:" << endl;
    ebook.display();

    ebook.applyDiscount(20);

    cout << "\nAfter discount:" << endl;
    ebook.display();

    return 0;
}
