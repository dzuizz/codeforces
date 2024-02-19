#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int a, b, c; cin >> a >> b >> c;

    cout << 4 * (sqrt(a*b/c) + sqrt(a*c/b) + sqrt(b*c/a)) << '\n';
}