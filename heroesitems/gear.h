#pragma once
using std::string;
class Gear{
    public:
        int ATK,DEF,HP,MP;
        string name;

        Gear(string name, int ATK,int DEF, int HP, int MP):name(name), ATK(ATK),DEF(DEF),HP(HP),MP(MP) {}
};