#pragma once
#include<bits/stdc++.h>
#include"account.h"
class SavingAccount:public Account{
    protected:
        double interestRate;
    public:
    SavingAccount(double balance=0, double rate=0):Account(balance){
        interestRate=rate;
    }
    double interest(){
        return balance*interestRate;
    }
};