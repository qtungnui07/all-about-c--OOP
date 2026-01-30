#include<bits/stdc++.h>
#include"box.h"
using namespace std;

int main(){
    Box box;
    int a,b;
    cin>>a>>b;
    box.setDims(a,b);
    int c,d;
    cin>>c>>d;
    Box *box2= new Box(c,d);
    cout<<box.area()<<endl;
    cout<<box2->area();
    return 0;
}