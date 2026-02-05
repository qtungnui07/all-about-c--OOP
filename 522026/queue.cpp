#include<bits/stdc++.h>
using namespace std;
void printBinary(queue<int> &q){
    if (q.empty()) return;
    int x=q.front();
    q.pop();
    printBinary(q);
    cout<<x;
}
int main(){
    int N;cin>>N;
    if (N==0){
        cout<<0;
        return 0;
    }
    queue<int> q;
    int n=N;
    while(n>0){
        q.push(n%2);
        n/=2;

    }
    printBinary(q);
    return 0;
}