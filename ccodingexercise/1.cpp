// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     for
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;cin >> n;
    n = abs(n);
    int maxDigit = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit > maxDigit) maxDigit = digit;
        n /= 10;
    }
    cout << maxDigit;
    return 0;
}
