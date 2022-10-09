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
    int x; cin >> x;
    int a[n][2];

    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
        if (a[i][0] == a[i][1] || 7 - a[i][0] == a[i][1]) {
            cout << "NO\n";
            return 0;
        }
    }

    int cur = x;
    for (int i = 0; i < n; i++) {
        if (a[i][0] == cur || a[i][1] == cur) {
            cout << "NO\n";
            return 0;
        }

        cur = 7 - cur;
        if (a[i][0] == cur || a[i][1] == cur) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}