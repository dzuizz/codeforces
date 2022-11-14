#include <algorithm>
#include <iostream>
#include <cstring>
#include <climits>
#include <cstdio>
#include <cmath>
#include <unordered_map>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef map<ll, ll> mll;
typedef set<ll> sll;
typedef queue<ll> qll;
typedef queue<pll> qpll;

#define all(x) x.begin(), x.end()
#define sz(x) (ll) x.size()
#define fr front()
#define bk back()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define FOR(i, a, b, inc) for (ll i = a; i < b; i += inc)
#define RFOR(i, a, b, inc) for (ll i = b - 1; i >= a; i -= inc)
#define REP(i, a) FOR(i, 0, a, 1)
#define RREP(i, a) RFOR(i, 0, a, 1)
#define each(a, x) for (auto& a: x)

const ll INF = 1e9;
const ll M = 1e9 + 7;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
ll pow(ll a, ll b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    ll x = pow(a, b/2);
    if (b%2 == 0) return x*x;
    return x*x*a;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n, q, c; cin >> n >> q >> c;
    ll x[n], y[n], s[n];

    REP(i, n) {
        cin >> x[i] >> y[i] >> s[i];
    }

    ll dp[c + 5][105][105];
    memset(dp, 0, sizeof(dp));
    
    REP(i, n) {
        REP(j, c + 1) {
            dp[j][x[i]][y[i]] += (s[i] + j) % (c + 1);
        }
    }

    FOR(i, 1, 101, 1) {
        FOR(j, 1, 101, 1) {
            REP(k, c + 1) {
                dp[k][i][j] += dp[k][i - 1][j] + dp[k][i][j - 1] - dp[k][i - 1][j - 1];
            }
        }
    }

    REP(i, q) {
        ll t, x1, y1, x2, y2; cin >> t >> x1 >> y1 >> x2 >> y2;

        t %= c + 1;

        ll ans = dp[t][x2][y2] - dp[t][x1 - 1][y2] - dp[t][x2][y1 - 1] + dp[t][x1 - 1][y1 - 1];
        cout << ans << '\n';
    }
}
