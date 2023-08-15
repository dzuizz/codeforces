#include<iostream>
using namespace std;

#define int long long

signed main() {
    int n, k; cin >> n >> k;
    int prefSum[n+2]; prefSum[0] = 0;

    for (int i=1; i<=n; i++) {
        int x; cin >> x;
        prefSum[i] = prefSum[i-1] + x;
    }

    int ans = 1;
    for (int i=1; i<=n-k+1; i++) {
        if (prefSum[i+k-1] - prefSum[i-1] < prefSum[ans+k-1] - prefSum[ans-1]) ans = i;
    }

    cout << ans << '\n';
}