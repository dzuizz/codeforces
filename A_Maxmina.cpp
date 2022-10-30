#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back
#define fi first
#define se second

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n];

        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                ans++;
            }
        }

        if (ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
