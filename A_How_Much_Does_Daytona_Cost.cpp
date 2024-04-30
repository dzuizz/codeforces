#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, e; cin >> n >> k;
        bool flag = 0;

        for (int i = 0; i < n; ++i) {
            cin >> e;
            flag = flag or (e == k);
        }

        cout << (flag ? "YES\n" : "NO\n");
    }
}