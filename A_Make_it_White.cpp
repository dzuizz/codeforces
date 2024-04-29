#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int, bool> mp;

        for (int i = 0; i < n; ++i) {
            char ch; cin >> ch;
            if (ch == 'B') mp[i] = 1;
        }

        if (mp.size() <= 1) cout << mp.size() << '\n';
        else cout << (mp.rbegin()->first - mp.begin()->first + 1) << '\n';
    }
}