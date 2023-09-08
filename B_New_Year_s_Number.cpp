#include<iostream>
using namespace std;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        while (n >= 0) {
            if (n%2020 == 0) {
                cout << "YES\n";
                break;
            }
            n -= 2021;
        }

        if (n < 0) cout << "NO\n";
    }
}