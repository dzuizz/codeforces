#include<iostream>
#include<vector>
#include<queue>
using namespace std;

typedef pair<int, int> ii;

int main() {
    int n, m; cin >> n >> m;

    vector<int> adjlist[n+2];
    int a[n+2];

    for (int i=1; i<=n; i++) cin >> a[i];

    for (int i=0; i<n-1; i++) {
        int u, v; cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    queue<ii> q; q.push({1, a[1]});
    vector<bool> vis(n+2, 0);
    int ans=0;

    while (!q.empty()) {
        ii cur = q.front(); q.pop();
        if (cur.second > m) continue;
        vis[cur.first]=1;

        bool leaf=1;
        for (auto nx : adjlist[cur.first]) {
            if (vis[nx]) continue;
            leaf = 0;

            if (a[nx]) q.push({nx, cur.second+a[nx]});
            else q.push({nx, 0});
        }

        if (leaf) ans++;
    }

    cout << ans << '\n';
}