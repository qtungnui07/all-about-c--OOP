#include<bits/stdc++.h>
using namespace std;
void ptb2(double a,double b, double c){
    if (a==0){
        if (b == 0) {
            cout << "No solution";
        } else {
            cout << "Linear solution: " << -c / b;
        }
        return;
    }
    double d=b*b-4*a*c;
    if (d>0){
        double root1 = (-b+sqrt(d))/(2*a);
        double root2 = (-b-sqrt(d))/(2*a);
        cout<<root1<<" "<<root2;
    }
    else if (d==0) cout<< -b/2/a;
    else cout<<"imaginary";
}
int main(){
    double a,b,c; cin>>a>>b>>c;
    // if (a==0){
    //     cout<<"imaginary";
    //     return 0;
    // }
    // double d=b*b-4*a*c;
      // if (d>0){
    //     double root1 = (-b+sqrt(d))/(2*a);
    //     double root2 = (-b-sqrt(d))/(2*a);
    //     cout<<root1<<root2;
    
    // else if (d==0) cout<<-b/2/a;
    // else cout "imaginary";
    ptb2(a,b,c);
    return 0;
}

