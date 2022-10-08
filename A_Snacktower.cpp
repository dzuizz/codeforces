#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second

int main() {
    int n; cin >> n;
    bool vis[n + 2];
    int a[n];

    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++) cin >> a[i];

    int cur = n;
    for (int i = 0; i < n; i++) {
        vis[a[i]] = 1;
        while (cur > 0 && vis[cur]) {
            cout << cur-- << " ";
        }
        cout << '\n';
    }
}