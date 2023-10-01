#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define int long long
#define fi first
#define se second

const int INF = 1e9;
const int M = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    int cnt=0;
    for (auto ch : s) {
        if (ch == 'A') cnt++;
        else cnt--;
    }

    if (cnt > 0) cout << "Anton\n";
    else if (cnt < 0) cout << "Danik\n";
    else cout << "Friendship\n";
}
