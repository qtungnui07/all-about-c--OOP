#include <iostream>
#include "VIPSavings.h"
using namespace std;

int main() {
    int choice;
    double balance, rate;
    VipSavings account; 
    bool created = false;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Create account\n";
        cout << "2. Show balance\n";
        cout << "3. Show interest\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter balance: ";
            cin >> balance;
            cout << "Enter interest rate: ";
            cin >> rate;

            account = VipSavings(balance, rate);
            created = true;

            cout << "Account created!\n";
            break;

        case 2:
            if (created)
                account.showBalance();
            else
                cout << "Create account first!\n";
            break;

        case 3:
            if (created)
                cout << "Interest: "
                          << account.interest() << endl;
            else
                cout << "Create account first!\n";
            break;

        case 0:
            cout << "Bye!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
