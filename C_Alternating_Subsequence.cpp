#include<iostream>
#include<vector>
using namespace std;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int prev; cin >> prev;
        int sum = prev;

        for (int i=1; i<n; i++) {
            int x; cin >> x;

            if (x<0 == prev<0) {
                sum -= prev;
                prev = max(prev, x);
                sum += prev;
            } else {
                prev = x;
                sum += prev;
            }
        }

        cout << sum << '\n';
    }
}