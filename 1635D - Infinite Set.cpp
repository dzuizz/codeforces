#include <bits/stdc++.h>
using namespace std;

const int m = 1e9+7;
int mod(int x) { return x >= m ? x - m : x; }

int main() {
  int n, p; cin >> n >> p;
  int a[n]; for (int i=0; i<n; ++i) cin >> a[i];
  sort(a, a+n);

  int dp[200005], s=0, t=1, u;
  dp[0]=1;
  for (int i=1; i<=p; ++i) {
    u = mod(s + t); s = t; t = u;
    dp[i] = mod(dp[i-1] + t);
  }

  map<int,bool> mp;
  int ans=0;
  for (int i=0; i<n; ++i) {
    int x = a[i];
    bool flag=0;
    while (x>0&&!flag) {
      if (x&1) x >>= 1;
      else if (!(x&2)) x >>= 2;
      else break;
      if (mp[x]) flag=true;
    }
    if (mp[x]) flag=true;
    if (flag) continue;
    mp[a[i]]=true;

    int k = 32 - __builtin_clz(a[i]);
    if (p<k) break;
    ans = mod(ans+dp[p-k]);
  }
  cout << ans << '\n';
}

