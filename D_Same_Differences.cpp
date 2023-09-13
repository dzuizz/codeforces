#include<iostream>
#include<unordered_map>
using namespace std;

#define int long long

signed main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int a[n];

        unordered_map<int, int> mp;
        for (int i=0; i<n; i++) cin >> a[i];

        int ans=0;
        for (int i=n-1; i>=0; i--) ans += mp[a[i]-i]++;

        cout << ans << '\n';
    }
}