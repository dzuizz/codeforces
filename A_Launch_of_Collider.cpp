#include <algorithm>
#include <iostream>
#include <climits>
#include <cstring>
#include <vector>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, char> ic;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second

int main() {
    int n; cin >> n;
    ic a[n];

    for (int i = 0; i < n; i++) cin >> a[i].se;
    for (int i = 0; i < n; i++) cin >> a[i].fi;

    sort(a, a + n);
    int ans = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (a[i].se == 'L' && a[i - 1].se == 'R') {
            ans = min(ans, (a[i].fi - a[i - 1].fi) / 2);
        }
    }

    if (ans == INT_MAX) cout << "-1\n";
    else cout << ans << '\n';
}