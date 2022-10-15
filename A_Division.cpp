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

        cout << "Division ";
        if (n >= 1900) cout << 1 << '\n';
        else if (n >= 1600) cout << 2 << '\n';
        else if (n >= 1400) cout << 3 << '\n';
        else cout << 4 << '\n';
    }
}
