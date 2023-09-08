#include<iostream>
using namespace std;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;

        if (a + b == c) cout << "+\n";
        else cout << "-\n";
    }
}
