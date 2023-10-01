#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define int long long
#define fi first
#define se second

const int INF = 1e9;
const int M = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, h; cin >> n >> h;
    int ans=n;

    for (int i=0; i<n; i++) {
        int x; cin >> x;
        ans += (x>h);
    }

    cout << ans << '\n';
}
