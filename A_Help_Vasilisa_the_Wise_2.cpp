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
    int r[2], c[2], d[2];

    for (int i = 0; i < 2; i++) cin >> r[i];
    for (int i = 0; i < 2; i++) cin >> c[i];
    for (int i = 0; i < 2; i++) cin >> d[i];

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int l = 1; l <= 9; l++) {
                for (int k = 1; k <= 9; k++) {
                    if (i == j || i == l || i == k || j == l || j == k || l == k) continue;

                    int a[2][2] = {{i, j}, {l, k}};
                    if (a[0][0] + a[0][1] != r[0]) continue;
                    if (a[1][0] + a[1][1] != r[1]) continue;
                    if (a[0][0] + a[1][0] != c[0]) continue;
                    if (a[0][1] + a[1][1] != c[1]) continue;
                    if (a[0][0] + a[1][1] != d[0]) continue;
                    if (a[0][1] + a[1][0] != d[1]) continue;

                    cout << i << " " << j << '\n';
                    cout << l << " " << k << '\n';
                    return 0;
                }
            }
        }
    }

    cout << "-1\n";
}