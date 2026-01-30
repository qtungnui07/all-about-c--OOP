#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }

    int mx = a[0];
    int mn = a[0];
    long long sum = 0;

    for (int x : a) {
        mx = max(mx, x);
        mn = min(mn, x);
        sum += x;
    }

    cout << mx << " " << mn << " " << sum << endl;

}
