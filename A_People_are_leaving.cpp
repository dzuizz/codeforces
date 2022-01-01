#include <iostream>
using namespace std;

const int N = 1e6;
int dsu[N+2];
int n, m, e;
char ch;

int find(int n) {
  if(dsu[n] == n) return n;
  return dsu[n] = find(dsu[n]);
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> n >> m;
  for(int i=1;i<=n+1;i++) dsu[i] = i;
  for(int i=1;i<=m;i++) {
    cin >> ch >> e;
    if(ch == '-') {
      dsu[e] = e+1;
    }else {
      e = find(e);
      cout << (e > n ? -1 : e) << '\n';
    }
  }
}