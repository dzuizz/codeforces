#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

#define fi first
#define se second

const ll INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    ll t; cin >> t;
    while (t--) {
        ll n, a, b; cin >> n >> a >> b;
        string x; cin >> x;
        x = '-'+x; // string 1-based
        
        pll dp[n+2][a][b][n+2]; // dp(idx, %a, %b, rTake)
        
        // dp[i][j][k][l] -> MIN abs diff |r-b| when we only consider x[1..i] and currently red%A=j, black%B=k, and we've already taken l red numbers 
        
        for (ll i=0; i<=n; i++)
            for (ll j=0; j<a; j++)
                for (ll k=0; k<b; k++)
                    for (ll l=0; l<=n; l++)
                        dp[i][j][k][l] = pll(INF, 0);
        
        // Base Case
        for (ll l=1; l<n; l++)
            dp[0][0][0][l].fi = abs(2*l-n);
        
        // dp[i][j][k][l] -> we only consider digit[1..i], red%A = j, black%B = k, we take l red digits 
        
        // Transition
        for (ll i=0; i<n; i++) {
            for (ll j=0; j<a; j++) {
                for (ll k=0; k<b; k++) {
                    for (ll l=0; l<=n; l++) {
                        ll dig = x[i+1]-'0';
                        
                        if (l && dp[i][j][k][l].fi < dp[i+1][(j*10+dig)%a][k][l-1].fi) 
                            dp[i+1][(j*10+dig)%a][k][l-1] = pll(dp[i][j][k][l].fi, dp[i][j][k][l].se*2 + 1);
                            
                        if (dp[i][j][k][l].fi < dp[i+1][j][(k*10+dig)%b][l].fi) 
                            dp[i+1][j][(k*10+dig)%b][l] = pll(dp[i][j][k][l].fi, dp[i][j][k][l].se*2 + 0);
                    }
                }
            }
        }
        
        if (dp[n][0][0][0].fi == INF) cout << "-1\n";
        else {
            ll res = dp[n][0][0][0].se;
            string s = "";
            
            for (ll i = 0; i < n; i++) {
                if (res - (res/2)*2 == 1) s = "R"+s;
                else s = "B"+s;
                res /= 2;
            }
            cout << s << '\n';
        }
        
    }
}
