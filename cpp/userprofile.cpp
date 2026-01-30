#include<bits/stdc++.h>
#include"userprofile.h"
using namespace std;
int main(){
    int a;
    string b,c;
    bool d;
    cin>>a>>b>>c>>d;
    UserProfile profile(a,b,c,d);
    profile.display();
    return 0;
}