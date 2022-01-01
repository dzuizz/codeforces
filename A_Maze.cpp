// https://vjudge.net/contest/444454
// pass: gogetgold

// #XX###
// X132XX
// #X22#X

#include <iostream>
using namespace std;

const int N = 5e2, INF = 1e9;
char graph[N][N];
bool visited[N][N];
int r, c, n, ans, xs[4] = {0, 1, 0, -1},
x, y, sl, sj,     ys[4] = {1, 0, -1, 0};

bool valid(int l, int j) {
  return l >= 0 && l < r && j >= 0 && j < c && graph[l][j]=='.' && !visited[l][j];
}

void dfs(int l, int j){
  visited[l][j] = true;
  for(int i=0;i<4;i++){
    x = l+xs[i], y = j+ys[i];
    if (!valid(x, y)) continue;
    // cout << l << ' ' << j << " -> " << x << ' ' << y << '\n';
    dfs(x, y);
  }
  if(n<=0) return;
  graph[l][j] = 'X';
  n--;
}

int main(){
  cin >> r >> c >> n;
  for(int l=0;l<r;l++){
    for(int j=0;j<c;j++){
      cin >> graph[l][j];
      if(graph[l][j]=='.') sl = l, sj = j;
    }
  }
  dfs(sl, sj);
  for(int l=0;l<r;l++){
    for(int j=0;j<c;j++){
      cout << graph[l][j];
    }
    cout << endl;
  }
}
