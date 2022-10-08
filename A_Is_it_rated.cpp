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
    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) {
            cout << "rated\n";
            return 0;
        }
    }

    bool flag = 0;
    int mn = a[0];
    for (int i = 1; i < n; i++) {
        mn = min(mn, a[i]);
        if (a[i] > mn) {
            flag = 1;
            break;
        }
    }

    if (flag) cout << "unrated\n";
    else cout << "maybe\n";
}