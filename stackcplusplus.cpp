#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(40);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.size();
    if (!s.empty()) cout<<"k rong";
}