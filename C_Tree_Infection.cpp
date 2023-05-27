// https://tlx.toki.id/problems/bnpchs-2021-penyisihan
// https://codeforces.com/problemset/problem/1665/C

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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll _; cin >> _;
    while (_--) {
        ll n; cin >> n;
        
        mll m; 
        ll cnt = 1;
        for (int i = 1; i < n; i++) {
            ll x; cin >> x;
            
            if (!m[x]) cnt++;
            m[x]++;
        }
        
        vll tmp;
        m[0] = 1;
        for (auto p : m) tmp.pb(p.se);
        sort(all(tmp), greater<ll>());
        
        vll v; ll x = cnt;
        for (int i = 0; i < sz(tmp); i++) {
            if (tmp[i] > cnt) {
                v.pb(tmp[i] - cnt);
            }
            cnt--;
        }
        sort(all(v), greater<ll>());
        
        if (v.empty()) {
            cout << x << '\n';
            continue;
        }
        
        int pref[n + 1];
        pref[0] = v[0];
        
        int p = 0, minCost = INF;
        for (int ht = v[0]; ht >= 0; ht--) {
            while (p < v.size() && v[p] >= ht) {
                p++;
                pref[p] = pref[p-1] + v[p];
            }
            
            int help = pref[p-1] - ht*p;
            int curCost = max(help, ht);
            minCost = min(minCost, curCost);
        }
        
        cout << minCost + x << '\n';
    }
}
