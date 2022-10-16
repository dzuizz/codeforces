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
    string ans = "Timur";
    sort(all(ans));

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        sort(all(s));

        if (s == ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
