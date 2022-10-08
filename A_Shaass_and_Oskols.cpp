#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        x--; y--;

        if (x > 0) a[x - 1] += y;
        if (x < n - 1) a[x + 1] += a[x] - y - 1;

        a[x] = 0;
    }

    for (int i = 0; i < n; i++) cout << a[i] << '\n';
}