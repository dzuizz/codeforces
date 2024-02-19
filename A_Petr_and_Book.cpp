#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    int a[8], sum = 0; a[0] = 0;

    for (int i = 1; i < 8; i++) {
        cin >> a[i];
        a[i] += a[i-1];
    }

    n %= a[7];
    n += (n ? 0 : a[7]);
    
    cout << (lower_bound(a, a + 8, n) - a) << '\n';
}