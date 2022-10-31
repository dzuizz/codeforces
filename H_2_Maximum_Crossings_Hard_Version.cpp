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
#define FOR(i, a, b, inc) for (int i = a; i < b; i += inc)
#define RFOR(i, a, b, inc) for (int i = b - 1; i >= a; i -= inc)
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

vll segTree;

void update(ll idx, ll l, ll r, ll x) {
    if (l == r) {
        segTree[idx]++;
        return;
    }

    ll mid = (l + r) / 2;
    if (x <= mid) update(idx * 2, l, mid, x);
    else update(idx * 2 + 1, mid + 1, r, x);
    segTree[idx] = segTree[idx * 2] + segTree[idx * 2 + 1];
}

ll query(ll idx, ll l, ll r, ll x, ll y) {
    if (l > y || r < x) return 0;
    if (l >= x && r <= y) return segTree[idx];

    ll mid = (l + r) / 2;
    return query(idx * 2, l, mid, x, y) + query(idx * 2 + 1, mid + 1, r, x, y);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        segTree = vll(4 * n, 0);

        ll ans = 0;
        REP(i, n) {
            ll e; cin >> e; e--;

            ans += query(1, 0, n - 1, e, n - 1);
            update(1, 0, n - 1, e);
        }

        cout << ans << '\n';
    }
}
