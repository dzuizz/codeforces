#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    int a[2][2];
    memset(a, 0, sizeof(a));

    for (int i = 0; i < n; i++) {
        int p, q; cin >> p >> q;
        a[0][p]++;
        a[1][q]++;
    }

    cout << min(a[0][0], a[0][1]) + min(a[1][0], a[1][1]) << '\n';
}