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

    int a, b; cin >> a >> b;

    int cnt=0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        cnt++;
    }

    cout << cnt << '\n';
}
