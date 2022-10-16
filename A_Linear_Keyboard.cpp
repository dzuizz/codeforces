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
        string keyboard, s; cin >> keyboard >> s;
        map<char, int> m;

        for (int i = 0; i < sz(keyboard); i++) m[keyboard[i]] = i;

        int ans = 0;
        for (int i = 0; i < sz(s) - 1; i++) {
            ans += abs(m[s[i]] - m[s[i + 1]]);
        }

        cout << ans << '\n';
    }
}
