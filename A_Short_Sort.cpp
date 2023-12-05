#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("03")
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

#define fi first
#define se second
#define int long long
#define ld long double
#define pb push_back
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

typedef pair<int, int> ii;
typedef map<int, int> mii;
typedef queue<int> qi;
typedef vector<int> vi;
typedef stack<int> si;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    string s; cin >> s;

    int cnt=0;
    for (int i=0; i<3; i++) cnt += (s[i]-'a'==i);

    cout << (cnt%2?"YES\n":"NO\n");
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t=1; t<=tc; t++) {
        // cout << "Case #" << t << '\n';
        solve();
    }
}
