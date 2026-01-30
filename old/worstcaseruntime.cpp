#include<bits/stdc++.h>
using namespace std;
double approximate_exp(double x, int n){
    double approx = 0.0;
    for (int i =0;i<n;i++){
        approx +=pow(x,i)/tgamma(i+1);
    }
    return approx;

}
int main(){
    double x;int n;
    cin >>x>>n;
    double result = approximate_exp(x,n);
    cout<<"e^"<<x<<"="<<result<<endl;
    return 0;
}