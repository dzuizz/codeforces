#include <iostream>
using namespace std;

const int N = 3e5;
int dsu[N+2];
int e, n;

int find(int n){
  if(dsu[n] == n) return n;
  return dsu[n] = find(dsu[n]);
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++) dsu[i] = i;
  for(int i=0;i<n;i++){
    cin >> e; e--;
    e = find(e);
    cout << e+1 << " ";
    dsu[e] = (e+1)%n;
  }
}