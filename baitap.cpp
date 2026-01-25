//nhap so nguyen duong n
//in ra cac so chinh phuong nho hon n
//in ra cac so nguyen to nho hon n


#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    if (n<=1) {return false;}
    for (int i = 2; i*i<=n;++i){if (n%i==0){return false;}}
    return true;
}
int main(){
    int n;
    do{
        cin>>n;
    }while (n<=0);
    for (int i =0;i<n;i++){
        int m = (int)sqrt(i);
        if (m*m==i){
            cout<<i<<" ";
        }
    }
    cout<<""<<endl;
    for (int i=0;i<n;i++){
        if (is_prime(i)) {cout<<i<<" ";} 
    }
}