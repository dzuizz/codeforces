#include<iostream>
using namespace std;

#define int long long

signed main() {
    int n, m, k; cin >> n >> m >> k;
    int a[m];

    for (int i=0; i<m; i++) cin >> a[i];

    int ans=0;
    int x; cin >> x;

    for (int i=0; i<m; i++) {
        int cur = x^a[i];

        int cnt=0;
        while (cur) {
            cur &= cur-1;
            cnt++;
        }

        if (cnt <= k) ans++;
    }

    cout << ans << '\n';
}