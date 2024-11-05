#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;

  int d[1001]; memset(d, 0x3f, sizeof d);
  d[1] = 0;
  for (size_t i=1; i <= 1000; ++i) {
    for (size_t z=i; z > 0; --z) {
      if (i+i/z>1000) break;
      d[i+i/z] = min(d[i+i/z],d[i]+1);
    }
  }

  while (t--) {
    int n, k; cin >> n >> k; k = min(k, 12*n);
    int b[n]; for (size_t i=0; i<n; ++i) { cin >> b[i]; b[i] = d[b[i]]; }
    int c[n]; for (size_t i=0; i<n; ++i) cin >> c[i];

    int dp[n+1][k+1]; memset(dp, 0, sizeof dp);
    for (size_t i=1; i<=n; ++i) {
      for (size_t j=0; j<=k; ++j) {
        dp[i][j] = dp[i-1][j];
        if (j >= b[i-1]) dp[i][j] = max(dp[i][j], dp[i-1][j-b[i-1]] + c[i-1]);
      }
    }
    cout << *max_element(dp[n], dp[n] + k + 1) << '\n';
  }
}

