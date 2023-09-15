#include<iostream>
using namespace std;

#define int unsigned long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int ans=0;
        for (int i=1; i<=n/2; i++) {
            int x = i*2+1;
            ans += (x*x - (x-2)*(x-2)) * i;
        }

        cout << ans << '\n';
    }
}