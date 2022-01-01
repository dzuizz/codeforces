#include <iostream>
using namespace std;

const int N = 1e5;
int n, m, u, v;
int arr[N+5];
string type;

int find(int n){
  if(arr[n] == n) return n;
  return arr[n] = find(arr[n]);
}

void merge(int a, int b){
  a = find(a), b = find(b);
  if(a == b) return;
  arr[a] = b;
}

int main(){
  cin >> n >> m;
  for(int i=0;i<=n;i++) arr[i] = i;
  for(int i = 0 ; i < m ; i++) {
    cin >> type >> u >> v;
    if(type == "union") merge(u, v);
    else if(find(u) == find(v)) cout << "YES\n";
    else cout << "NO\n";
  }
}