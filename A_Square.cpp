#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        map<int, bool> p, q;
        for (int i : {0, 1, 2, 3}) {
            int a, b; cin >> a >> b;
            p[a] = 1, q[b] = 1;
        }
        cout << abs((p.begin()->first - p.rbegin()->first) * (q.begin()->first - q.rbegin()->first)) << '\n';
    }
}
