#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    
    int m; cin >> m;
    int b[m];

    for (int i = 0; i < m; i++) cin >> b[i];

    int mxVal = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] % a[i] || b[j] / a[i] < mxVal) continue;
            if (b[j] / a[i] == mxVal) cnt++;
            else mxVal = b[j] / a[i], cnt = 1;
        }
    }

    cout << cnt << '\n';
}