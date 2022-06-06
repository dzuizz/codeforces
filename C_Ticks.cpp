#include<iostream>
#include<iomanip>
#include<cstring>
#include<vector>
using namespace std;

vector<string> graph;
int n, m, k;

bool valid(int i, int j) {return 0 <= i && i < n && 0 <= j && j < m && graph[i][j] == '*';}

int main() {
  int t; cin >> t;
  while (t--) {
    cin >> n >> m >> k;
    
    graph = vector<string>(n);
    bool tick[n][m];
    
    memset(tick, 0, sizeof(tick));
    for (int i = 0; i < n; i++) cin >> graph[i];

    bool flag = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (graph[i][j] == '*') {
          int cnt = 0;
          int ri = i, rj = j;
          int li = i, lj = j;
          while (valid(--ri, ++rj) && valid(--li, --lj)) cnt++;
          
          if (cnt >= k) {
            tick[i][j] = 1;
            ri = i, rj = j;
            li = i, lj = j;
            while (valid(--ri, ++rj) && valid(--li, --lj)) {
              tick[ri][rj] = 1;
              tick[li][lj] = 1;
            }
          }
        }
      }
    }
    
    flag = 1;
    for (int i = 0; i < n && flag; i++) {
      for (int j = 0; j < m && flag; j++) {
        if (graph[i][j] == '*' && !tick[i][j]) flag = 0;
      }
    }
    if (flag) cout << "YES\n";
    else cout << "NO\n";
  }
}
