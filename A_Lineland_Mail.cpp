#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second

int main() {
    int n; cin >> n;
    ii a[n], ans[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].fi;
        a[i].se = i;
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        if (!a[i].se) {
            ans[a[i].se].fi = a[i + 1].fi - a[i].fi;
        } else if (a[i].se == n - 1) {
            ans[a[i].se].fi = a[i].fi - a[i - 1].fi;
        } else {
            ans[a[i].se].fi = min(a[i].fi - a[i - 1].fi, a[i + 1].fi - a[i].fi);
        }

        if (!a[i].se) {
            ans[a[i].se].se = a[n - 1].fi - a[i].fi;
        } else if (a[i].se == n - 1) {
            ans[a[i].se].se = a[i].fi - a[0].fi;
        } else {
            ans[a[i].se].se = max(a[i].fi - a[0].fi, a[n - 1].fi - a[i].fi);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i].fi << " " << ans[i].se << '\n';
    }
}