#include <bits/stdc++.h>
using namespace std;

void nhap(int A[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
}

void xuat(int A[], int n){
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

bool ktcp(int n){
    if (n < 0) return false;
    int m = sqrt(n);
    return m * m == n;
}

int tongcp(int A[], int n){
    int s = 0;
    for (int i = 0; i < n; i++)
        if (ktcp(A[i])) s += A[i];
    return s;
}

int main(){
    int A[1000], N;
    nhap(A, N);
    xuat(A, N);

    cout << "Tong cac so chinh phuong = " << tongcp(A, N);

    return 0;
}
