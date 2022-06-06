#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
typedef pair<int, int> ii;

#define fi first
#define se second

ii dir[4] = {ii(0, -1), ii(1, 0), ii(0, 1), ii(-1, 0)}; // W S E N
vector<vector<bool> > visited;
vector<vector<int> > graph;
vector<int> arr;
int n, m;

bool valid(int i, int j) {
  return 0 <= i && i < n && 0 <= j && j < m && !visited[i][j];
}

int dfs(int i, int j) {
  int res = 1;
  visited[i][j] = 1;
  
  for (int k : {3,2,1,0}) {
    int r = i + dir[k].fi;
    int c = j + dir[k].se;
    if (valid(r, c) && !((graph[i][j] >> k)&1) ) {
      res += dfs(r, c);
    }
  }
  return res;
}

int main() {
  cin >> n >> m;
  
  graph = vector<vector<int> >(n, vector<int>(m));
  visited = vector<vector<bool> >(n, vector<bool>(m));
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> graph[i][j];
    }
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (visited[i][j]) continue;
      arr.push_back(dfs(i, j));
    }
  }
  
  sort(arr.begin(), arr.end(), greater<int>());
  for (int room : arr) {
    cout << room << " ";
  }
}
