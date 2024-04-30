#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        int a[n];

        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            int e; cin >> e;
            ans += (upper_bound(a, a + n, k - e) - a);
        }
        cout << ans << '\n';
    }
}
