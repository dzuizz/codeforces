#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int p = n, q = 1, v = abs(a[0] - a[n-1]);
    for (int i = 1; i < n; i++) {
        if (abs(a[i] - a[i-1]) < v) {
            p = i, q = i+1, v = abs(a[i] - a[i-1]);
        }
    }

    cout << p << " " << q << '\n';
}