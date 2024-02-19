#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    pair<int, int> a[n];

    for (int i=0; i<n; i++) cin >> a[i].first >> a[i].second;

    int ans = 0;
    for (int i=0; i<n; i++) {
        bool flag[4] = {0,0,0,0};
        
        for (int j=0; j<n; j++) {
            if (a[j].first > a[i].first && a[j].second == a[i].second) flag[0] = 1;
            if (a[j].first < a[i].first && a[j].second == a[i].second) flag[1] = 1;
            if (a[j].first == a[i].first && a[j].second > a[i].second) flag[2] = 1;
            if (a[j].first == a[i].first && a[j].second < a[i].second) flag[3] = 1;
        }
        ans += (flag[0] + flag[1] + flag[2] + flag[3]) == 4;
    }

    cout << ans << '\n';
}