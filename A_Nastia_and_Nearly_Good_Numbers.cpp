#include<iostream>
using namespace std;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;

        int x=a, y=a*b, z = x+y;

        if (!(x%(a*b)) || !(x%(a*b))) cout << "NO\n";
        else cout << "YES\n" << x << ' ' << y << ' ' << z << '\n';
    }
}