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
    int n, k; cin >> n >> k;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        string x; cin >> x;

        bool flag = 1;
        for (int j = 0; j <= k; j++) {
            if (x.find('0' + j) == string::npos) {
                flag = 0;
                break;
            }
        }

        if (flag) ans++;
    }

    cout << ans << '\n';
}