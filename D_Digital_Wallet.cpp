#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <map>
using namespace std;

#define int long long
#define fi first
#define se second

typedef pair<int, int> ii;

signed main() {
    int n, m, k; cin >> n >> m >> k;
    
    int a[m+2][n+2];
    
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=m; j++) {
            if (!i || !j) a[j][i] = 0;
            else cin >> a[j][i];
        }
    }
    
    for (int j=1; j<=m; j++) {
        sort(a[j]+1, a[j]+n+1, greater<int>());
    }

    int dp[m+2][k+2]; memset(dp, 0, sizeof(dp));
    
    int totalOps = m-k+1;
    for (int i=1; i<=m; i++) { // first i columns
        for (int j=0; j<k; j++) { // i-j operations
            int sum=0;
            for (int l=0; l<=n; l++) {
                sum += a[i][l];
                int opsPerformed = totalOps - (i-j);
                int coverageSoFar = m-opsPerformed+1-k+1;
                int curCoverage = k - max(0ll, i-coverageSoFar+1);
                if (min(curCoverage, i-j) >= l) {
                    dp[i][j] = max(dp[i][j], dp[i-1][(i-1) - min(i-j-l, i-1)] + sum);
                }
            }
        }
    }
    
    cout << dp[m][k-1] << '\n';
}