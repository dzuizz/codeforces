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

    ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2) {
        if (y1 == y2)
            cout << -1 << '\n';
        else {
            ll x = x1 + abs(y1 - y2);
            printf("%lld %lld %lld %lld", x, y1, x, y2);
        }
    } else {
        if (y1 == y2) {
            ll y = y1 + abs(x1 - x2);
            printf("%lld %lld %lld %lld", x1, y, x2, y);
        } else {
            ll dx = abs(x1 - x2);
            ll dy = abs(y1 - y2);

            if (dx != dy)
                cout << -1 << '\n';
            else {
                printf("%lld %lld %lld %lld", x1, y2, x2, y1);
            }
        }
    }
}
