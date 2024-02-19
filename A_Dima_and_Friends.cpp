#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, s = 0, ans = 0;
    cin >> n;

    for (int i = 0, x; i < n; i++) {
        cin >> x;
        s += x;
    }

    for (int i = 1; i < 6; i++) {
        ans += ((s + i) % (n + 1) != 1);
    }

    cout << ans << '\n';
}