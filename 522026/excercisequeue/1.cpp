#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if (n<2) return false;
    for (int i =2;i<=sqrt(n);i++){if (n%i==0) return false;}
    return true;
}
int main(){
    queue<int> q;
    int n,temp;
    cin>>n;
    for (int i=0;i<=n;i++){cin>>temp;q.push(temp);}
    while(!q.empty()){
        int val=q.front();
        if(isPrime(val)){cout<<val<<" ";}
        q.pop();}
    cout<<endl;
    return 0;
}
