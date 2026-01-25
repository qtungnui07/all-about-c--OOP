#include <bits/stdc++.h>
using namespace std;

void hv(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "X"<<" ";
            else
                cout << "O"<<" ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    if (n>3 && n<20)
        hv(n);
    else
        cout<<"ket thuc";
    
    return 0;
}
