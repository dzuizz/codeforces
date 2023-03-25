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

vector<vll> edges, ans;
map<string, ll> m;
vb vis;

void dfs(ll x, vll &v) {
    vis[x] = 1;
    v.pb(x);
    
    bool flag = 1;
    each(e, edges[x]) {
        if (vis[e]) continue;

        if (flag) {
            dfs(e, v);
        } else {
            v = vll();
            dfs(e, v);
        }
        flag = 0;
    }

    if (flag)
        ans.pb(v);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t; cin >> t;

    while (t--) {
        ll n; cin >> n;
        
        edges = vector<vll>(n + 5);
        ans = vector<vll>();
        vis = vb(n + 5, 0);
        ll root = -1;

        FOR(i, 1, n + 1, 1) {
            ll e; cin >> e;

            if (e == i)
                root = i;

            edges[e].pb(i);
        }

        vll v;
        dfs(root, v);

        cout << sz(ans) << '\n';
        each(v, ans) {
            cout << sz(v) << '\n';
            each(x, v)
                cout << x << ' ';
            cout << '\n';
        }
        cout << '\n';
    }
}
