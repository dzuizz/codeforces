#include<iostream>
#include<vector>
using namespace std;

const int INF = 1e9;
vector<int> pref[2];
int t, e, n;

int main() {
  cin >> t;
  while(t--) {
    cin >> n;
    
    int ans = INF;
    for (int i : {0,1}) pref[i].resize(n + 2);
    
    for(int l : {0, 1}) {
      cin >> pref[l][1];
      for(int i = 2; i <= n; i++) {
        cin >> e;
        pref[l][i] = pref[l][i - 1] + e;
      }
    }
    for(int i = 1; i <= n; i++) {
      ans = min(ans, max(pref[0][n] - pref[0][i], pref[1][i-1]));
    }
    
    cout << ans << endl;
  }
  return 0;
}




