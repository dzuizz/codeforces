#include<iostream>
#include<vector>
using namespace std;

const int INF = 1e9;

vector<int> pref, suff, v;
int n, ans;

void dpPref(int cur) {
  if (cur == n) return;
  
  pref[cur] = min(pref[cur-1] + 1, v[cur]);
  dpPref(cur + 1);
}

void dpSuff(int cur) {
  if (cur < 0) return;
  
  suff[cur] = min(suff[cur+1] + 1, v[cur]);
  dpSuff(cur - 1);
}

int main() {
  cin >> n;
  
  v = pref = suff = vector<int>(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  
  pref[0] = 1;
  dpPref(1);
  
  suff[n-1] = 1;
  dpSuff(n-2);
  
  for (int i = 0; i < n; i++) {
    ans = max(ans, min(pref[i], suff[i]));
  }
  cout << ans << endl;
}
