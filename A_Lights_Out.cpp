#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

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
    int a[3][3], dir[4][2] = {{0,1},{0,-1}, {1,0}, {-1,0}};
    for (int i:{0,1,2}) for (int j:{0,1,2}) cin >> a[i][j];

    for (int i:{0,1,2}) {
        for (int j:{0,1,2}) {
            int cnt=a[i][j]+1;
            for (int k:{0,1,2,3}) {
                int x=i+dir[k][0], y=j+dir[k][1];
                if (x<0||x>2||y<0||y>2) continue;

                cnt += a[x][y];
            }

            cout << cnt%2;
        }
        cout << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t=1; t<=tc; t++) {
        // cout << "Case #" << t << '\n';
        solve();
    }
}
