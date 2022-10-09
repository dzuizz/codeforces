#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define pb push_back
#define fi first
#define se second

int main() {
    ll n, m; cin >> n >> m;
    ll a[5], b[5];

    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));

    for (ll i = 1; i <= n; i++) a[i % 5]++;
    for (ll i = 1; i <= m; i++) b[i % 5]++;

    ll ans = 0;
    ans += a[0] * b[0];
    ans += a[1] * b[4];
    ans += a[2] * b[3];
    ans += a[3] * b[2];
    ans += a[4] * b[1];

    cout << ans << '\n';
}