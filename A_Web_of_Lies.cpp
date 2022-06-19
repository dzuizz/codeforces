#include<iostream>
#include<vector>
using namespace std;

vector<int> strongerNobles;

int main() {
  int n, m, res = 0; cin >> n >> m;
  strongerNobles.resize(n);
  
  for(int i = 0; i < m; i++) {
    int u, v; cin >> u >> v;
    strongerNobles[min(u, v)]++;
  }
  for(int nobles : strongerNobles) {
    if(nobles == 0) res++;
  }
  
  int q; cin >> q;
  for(int i = 0; i < q; i++ ) {
    int x; cin >> x;
    if(x == 1) {
      int u, v; cin >> u >> v;
      if(!strongerNobles[min(u, v)]) res--;
      strongerNobles[min(u, v)]++;
    }
    else if(x == 2) {
      int u, v; cin >> u >> v;
      strongerNobles[min(u, v)]--;
      if(!strongerNobles[min(u, v)]) res++;
    } else {
      cout << res << endl;
    }
  }
}

