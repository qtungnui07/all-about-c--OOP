#pragma once
#include<bits/stdc++.h>
#include"savingaccount.h"
class VipSavings:public SavingAccount{
    public:
    VipSavings(double balance=0, double rate=0):SavingAccount(balance, rate*2){}
};