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
    int a[2 * n + 1];

    for (int i = 0; i <= 2 * n; i++) cin >> a[i];
    for (int i = 0; i <= 2 * n; i++) {

        if (i % 2 == 0 || !k) {
            cout << a[i] << " ";
            continue;
        }

        if (a[i] - 1 == a[i - 1] || a[i] - 1 == a[i + 1]) {
            cout << a[i] << " ";
            continue;
        }

        cout << a[i] - 1 << " "; k--;
    }
    cout << '\n';
}