#pragma once
#include<bits/stdc++.h>
#include"gear.h"
using std::string; 
using std::vector;
using std::cout; 
using std::endl;
class Heroes{
    string name;
    string role;
    int ATK,DEF,HP,MP;
    vector<Gear*> equippedItems;
    public:
        Heroes(string name, string role,int ATK, int DEF, int HP, int MP):name(name),role(role),ATK(ATK),DEF(DEF),HP(HP),MP(MP) {}
        void playerStats(){
            cout<<name<<" "<<role<<endl;
            cout<<"ATK: "<<ATK<<endl;
            cout<<"DEF: "<<DEF<<endl;
            cout<<"HP: "<<HP<<endl;
            cout<<"MP: "<<MP<<endl;
            cout<<"Items: "<<endl;
            if (equippedItems.empty()) cout<<"None items r equipped\n";
            for (int i =0;i<equippedItems.size();i++){
                cout<<i<<" "<<equippedItems[i]->name<<" ";

            }
        }
        void equip(Gear* gear){
            if (!gear) return; 
            ATK+=gear->ATK;
            DEF+=gear->DEF;
            HP+=gear->HP;
            MP+=gear->MP;
            equippedItems.push_back(gear);
            cout<<"Equipped: "<<gear->name<<endl;
        }
        void unequip(int index) {
            if (index < 0 || index >= equippedItems.size()) {
                cout << "Invalid index!" << endl;
                return;
            }
            Gear* gear = equippedItems[index];
            ATK -= gear->ATK;
            DEF -= gear->DEF;
            HP  -= gear->HP;
            MP  -= gear->MP;
            
            cout << ">> Unequipped: " << gear->name << endl;
            equippedItems.erase(equippedItems.begin() + index);
        }
             
};
