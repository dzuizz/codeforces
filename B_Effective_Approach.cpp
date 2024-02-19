#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        int x; cin >> x; --x;
        a[x] = i;
    }

    int q; cin >> q;
    int ans[2] = {0,0};
    while (q--) {
        int x; cin >> x; --x;
        ans[0] += a[x] + 1;
        ans[1] += n - a[x];
    }

    cout << ans[0] << " " << ans[1] << '\n';
}