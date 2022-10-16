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
        int n; cin >> n;
        string a, b; cin >> a >> b;

        for (int i = 0; i < n; i++) {
            if (a[i] == 'G') a[i] = 'B';
            if (b[i] == 'G') b[i] = 'B';
        }

        if (a == b) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}
