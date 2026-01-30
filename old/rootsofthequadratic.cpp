#include<bits/stdc++.h>
using namespace std;
void swap(double &x, double &y){
    double t=x;x=y;y=t;
}
int main(){
    double a,b,c; cin>>a>>b>>c;
    if (a==0){
        cout<<"imaginary";
        return 0;
    }
    double d=b*b-4*a*c;
    if (d>0){
        double root1 = (-b+sqrt(d))/(2*a);
        double root2 = (-b-sqrt(d))/(2*a);
        if (root1<root2) swap(root1,root2);
        cout<<root1<<root2;
    
    else if (d==0) cout<<-b/2/a;
    else cout "imaginary";
    return 0;
}