#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n, m; cin >> n >> m;
    priority_queue<int> p;
    priority_queue<int, vector<int>, greater<int> > q;

    for (int i = 0; i < m; ++i) {
        int e; cin >> e;
        p.emplace(e);
        q.emplace(e);
    }

    int ans[2] = {0, 0};
    while (n--) {
        int a = p.top(), b = q.top();
        ans[0] += a; p.pop();
        if (a - 1) p.push(a - 1);
        
        ans[1] += b; q.pop();
        if (b - 1) q.push(b - 1);
    }

    cout << ans[0] << " " << ans[1] << '\n';
}
