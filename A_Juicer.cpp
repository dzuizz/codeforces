#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n, b, d; cin >> n >> b >> d;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0, cur = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b) continue;
        cur += a[i];

        if (cur > d) {
            ans++;
            cur = 0;
        }
    }

    cout << ans << '\n';
}