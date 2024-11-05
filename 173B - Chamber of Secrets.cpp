#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  char a[n][m];

  vector<int> adj[n+m];
  for (size_t i=0; i<n; ++i) for (size_t j=0; j<m; ++j) {
    cin >> a[i][j];
    if (a[i][j] == '#') {
      adj[i].push_back(n+j);
      adj[n+j].push_back(i);
    }
  }

  queue<int> q;
  q.push(0);
  int dis[n+m+1]; memset(dis, 0x3f, sizeof dis);
  dis[0] = 0;

  while (q.size()) {
    int cur = q.front(); q.pop();
    for (auto &x : adj[cur]) {
      if (dis[x] > dis[cur] + 1) {
        dis[x] = dis[cur] + 1;
        q.push(x);
      }
    }
  }

  cout << (dis[n-1]==dis[n+m]?-1:dis[n-1]) << '\n';
}

