#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int a[3];

        for (int i : {0, 1, 2}) cin >> a[i];
        sort(a, a + 3);

        cout << (a[0] == a[1] ? a[2] : a[0]) << '\n';
    }
}
