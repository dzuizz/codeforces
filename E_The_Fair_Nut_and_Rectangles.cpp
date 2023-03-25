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

struct Rectangle {
    ll x, y, a;
    
    Rectangle(ll p=0, ll q=0, ll r=0): x(p), y(q), a(r) {}
    
    bool operator < (const Rectangle &oth) const {
        return x < oth.x;
    }
};

struct Line {
    ll m, c;
    
    Line(ll p=0, ll q=0): m(p), c(q) {}
    
    ll operator () (ll x) {
        return m*x + c;
    }
};

struct ConvexHull {
    ll sz;
    vector<Line> v;
    
    ConvexHull() {
        sz = 0;
        v.clear();
    }
    
    bool isSmaller(ll a, ll b, ll c, ll d) {
        if (a/b != c/d) return a/b < c/d;
        return (a%b) * d < (c%d) * b;
    }
    
    bool valid(Line A, Line B, Line C) {
        return isSmaller(A.c - B.c, B.m - A.m, B.c - C.c, C.m - B.m);
    }
    
    void insert(Line l) {
        while (sz >= 2 && !valid(v[sz - 2], v[sz - 1], l)) {
            v.pop_back(); sz--;
        }
        
        v.pb(l); sz++;
    }
    
    ll query(ll x) {
        ll res = -1;
        for (ll l = 0, r = sz-1; l <= r; ) {
            ll mid = (l+r)/2;
            
            res = max(res, v[mid](x));
            
            if (mid + 1 < sz && v[mid](x) > v[mid + 1](x)) r = mid - 1;
            else l = mid + 1;
        }
        
        return res;
    }
};

ll n;
vector<Rectangle> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    v.resize(n + 5);
    
    FOR(i, 1, n + 1, 1) {
        ll x, y, a; cin >> x >> y >> a;
        v[i] = Rectangle(x, y, a);
    }
    
    sort(v.begin() + 1, v.begin() + n + 1);
    
    vll dp(n + 5);
    ConvexHull ch = ConvexHull();
    
    dp[0] = 0;
    v[0] = Rectangle(0,0,0);
    ll ans = dp[0];
    
    FOR (i, 1, n + 1, 1) {
        ch.insert(Line(v[i - 1].x, dp[i - 1]));
        
        dp[i] = ch.query(-v[i].y) + v[i].x*v[i].y - v[i].a;
        ans = max(ans, dp[i]);
    }
    cout << ans << '\n';
}
