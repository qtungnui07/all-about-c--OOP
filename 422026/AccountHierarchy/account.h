#pragma once
#include<bits/stdc++.h>
using std::cout;
using std::endl;
class Account{
    protected:
        double balance;
    public:
        Account(double balence){
            this->balance=balance;
        }
        void showBalance(){
            cout<<"Balance: "<<balance<<endl;
        }
};
