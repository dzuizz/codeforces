#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char ch; cin >> ch;
            if (ch == '.') {
                cout << ((i+j)&1 ? 'W' : 'B');
            } else cout << ch;
        }
        cout << '\n';
    }
}
