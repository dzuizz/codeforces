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
        string s; cin >> s;
        if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) cout << "YES\n";
        else cout << "NO\n";
    }
}
