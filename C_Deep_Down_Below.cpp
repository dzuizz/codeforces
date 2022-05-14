#include<algorithm>
#include<iostream>
using namespace std;

#define fi first
#define se second

typedef pair<int, int> ii;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    
    ii sizes[n];
    
    for (int i = 0; i < n; i++) {
      int k, basePower = 0, curPower = 0; cin >> k;
      for (int l = 0; l < k; l++) {
        int e; cin >> e;
        if (curPower <= e) {
          basePower += e + 1 - curPower;
          curPower = e + 1;
        }
        curPower++;
      }
      sizes[i] = ii(basePower, k);
    }
    
    int ans = 0, pow = 0;
    sort(sizes, sizes+n);
    for (int i = 0; i < n; i++) {
      if (pow < sizes[i].fi) {
        ans += sizes[i].fi - pow;
        pow = sizes[i].fi;
      }
      pow += sizes[i].se;
    }
    cout << ans << endl;
  }
}
