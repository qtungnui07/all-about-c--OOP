//palindrome
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int digit=0;
    int 
    while (n>0){
        digit=digit*10+n%10;
        n/=10;
    }
    if (n==digit) cout<<"Palinddrome";
    else cout<<"NO";
    return 0;
}