#include<bits/stdc++.h>
using namespace std;
stuct Diem{
    char ten;
    float x,y;

};
void nhapDiem(Diem &A){
    cin >> A.ten>>A.x>>A.y;
}
float kc(Diem A, Diem B){
    return sqrt((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
}
float dientich(Diem A, Diem B, Diem C){
    float a=kc(A,B);
    float b=kc(A,C);
    float b=kc(B,C);
    float p = (a+b+c)/2;
    if (a+b>c&&a+c>b&&b+c>a)
        return sqrt(p*(p-a)*(p-b)*(p-c));
    else
        return 0;

}
int main(){
    Diem A,B,c;
    nhapDiem(A);
    nhapDiem(B);
    nhapDiem(C);
    cout << dientich(A,B,C);
    return 0;
}