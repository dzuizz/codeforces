#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if (a < b && b != c) cout << (b < c ? "STAIR\n" : "PEAK\n");
        else cout << "NONE\n";
    }
}
