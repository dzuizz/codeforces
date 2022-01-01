#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

const int N = 3e5;
int n, m, u, v;
int lead[N+5];
int mini[N+5];
int maxi[N+5];
int cnt[N+5];
string type;

int find(int n){
  if(lead[n] == n) return n;
  return lead[n] = find(lead[n]);
}

void merge(int a, int b){
  a = find(a), b = find(b);
  if(a == b) return;
  maxi[b] = max(maxi[a], maxi[b]);
  mini[b] = min(mini[a], mini[b]);
  cnt[b] = cnt[a] + cnt[b];
  lead[a] = b;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> n >> m;
  for(int i=0;i<=n;i++) {
    lead[i] = i;
    maxi[i] = i;
    mini[i] = i;
    cnt[i] = 1;
  }
  for(int i = 0 ; i < m ; i++) {
    cin >> type >> u;
    if(type == "union") {
      cin >> v; 
      merge(u, v);
    }
    else{
      u = find(u);
      cout << mini[u] << " " << maxi[u] << " " << cnt[u] << endl;
    }
  }
}