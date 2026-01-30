#include<bits/stdc++.h>
#include"heroes.h"
using namespace std;
int main(){
    string playerName;
    getline(cin, playerName);
    Heroes player(playerName, "Adventurer",10,10,10,10);
    int choice;
    while (true){
        player.playerStats();
        cout << "1. Add New Item (tu nhap chi so)\n2. Remove Item\n0. Exit\nChoice: "; cin>>choice;
        if (choice==1){
            string gearName;
            int a, d, h, m;
            cout << "Ten Item: "; cin.ignore(); getline(cin, gearName);
            cout << "ATK DEF HP MP: "; cin >> a >> d >> h >> m;
            player.equip(new Gear(gearName, a, d, h, m));
        }
        else if (choice==2){
            int idx;
            cout<<"chon items can thao ";cin>>idx;
            player.unequip(idx);
        }
        else if (choice ==0) break;
        
    }
    return 0;

}