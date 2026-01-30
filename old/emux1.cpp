#include<bits/stdc++.h>
using namespace std;
double approximate_exp(double x,int n){
    double approx =0.0;
    for (int  i=0; i<n;i++){
        double term=1.0;
        for (int j=1;j<=i;j++){
            term *= x/j;

        }
        approx+=term;

    }
    return approx;
}
int main(){
    double x;int n;

    cin>>x>>n;
    double res=approximate_exp(x,n);
    cout<<res;
    return 0;
}