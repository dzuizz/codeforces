#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define fi first
#define se second
typedef pair<int, int> ii;
typedef pair<int, string> is;

const int INF = 1e13;
const int MAX_N = 2e5+5;
const int MAX_Q = 305;

vector<vector<vector<int> > > cost, memo;
vector<ii> queries; // (x, y)

int dp(int i, int j, int k) {
    if (memo[i][j][k] != -1) return memo[i][j][k];
    
    int cur = max(max(i, j), k), res = INF;
    
    cur++;
    while (cur < queries.size() && queries[cur].se == -1) cur++;
    if (cur == queries.size()) return memo[i][j][k] = 0;
    
    res = min(res, dp(cur, j, k) + cost[i][cur][1] * abs(queries[cur].fi-queries[i].se) + cost[cur][cur][1] * abs(queries[cur].fi-queries[cur].se));
    res = min(res, dp(i, cur, k) + cost[j][cur][2] * abs(queries[cur].fi-queries[j].se) + cost[cur][cur][2] * abs(queries[cur].fi-queries[cur].se));
    res = min(res, dp(i, j, cur) + cost[k][cur][3] * abs(queries[cur].fi-queries[k].se) + cost[cur][cur][3] * abs(queries[cur].fi-queries[cur].se));
    
    return memo[i][j][k] = res;
}

signed main() {
    int n, q; cin >> n >> q;

    cost = vector<vector<vector<int> > >(q+5, vector<vector<int> >(q+5, vector<int>(5)));
    memo = vector<vector<vector<int> > >(q+5, vector<vector<int> >(q+5, vector<int>(q+5, -1)));
    queries.push_back({1, 1});
    
    for (int l:{1,2,3}) cost[0][0][l]=INF;
    
    for (int i=1; i<=q; i++) {
        int x; cin >> x;
        
        for (int l:{1,2,3}) cost[i][i][l]=x;
    }
    
    bool on[5] = {1,1,1,1,1};
    for (int i=1; i<=q; i++) {
        int t, x, y=-1; cin >> t >> x;
        
        if (t == 1) cin >> y;
        else on[x] ^= 1;
        queries.push_back({x, y});
        
        for (int l:{1,2,3})
        cost[i][i][l] = (on[l]?cost[i][i][l]:INF);
    }
    
    for (int l:{1,2,3}) for (int i=0; i<=q; i++) for (int j=i+1; j<=q; j++)
        cost[i][j][l] = min(cost[i][j-1][l], cost[j][j][l]);
    
    cout << dp(0,0,0) << '\n';
}
