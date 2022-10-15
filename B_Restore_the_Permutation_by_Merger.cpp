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
        map<int, int> m;
        int a[n];

        int ind = 0;
        for (int i = 0; i < n * 2; i++) {
            int e; cin >> e;

            if (m[e] % 2 == 0) a[ind++] = e;
            m[e]++;
        }

        for (int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << '\n';
    }
}
