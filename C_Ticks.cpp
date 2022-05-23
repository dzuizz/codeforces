/*********************************HEADER**********************************

Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=1

Problem : https://vjudge.net/contest/484765
https://codingcompetitions.withgoogle.com/kickstart/round/00000000004362d6/00000000008b3a1c

https://uhunt.onlinejudge.org/

Segment Tree
Example : {
  array: https://ideone.com/LJJJB9 ,
  poller: https://ideone.com/dyJ2kv
}

Convex Hull
Example : https://ideone.com/0JIY6q

Matrix Exponentiation : https://ideone.com/uDCb6o
Contest : https://vjudge.net/contest/488578

Intersections:
Example : https://ideone.com/Gcj0Fu
https://www.spoj.com/problems/HORRIBLE/

https://vjudge.net/contest/467726#overview

**************************************************************************/

#include<iostream>
#include<iomanip>
#include<cstring>
#include<vector>
using namespace std;

vector<string> graph;
int n, m, k;

bool valid(int i, int j) {return 0 <= i && i < n && 0 <= j && j < m && graph[i][j] == '*';}

// int up(int i, int j) {
//   if (valid(i+1, j+1)) {
//     return up(i+1, j+1) + 1;
//   }
  
  
// }

// int down(int i, int j) {
//   if (valid[i-1][j-1]) {
//     return down(i-1, j-1) + 1;
//   }
  
//   int left = up(i, j);
//   return 1;
// }

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
