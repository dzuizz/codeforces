#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    int ans1 = 0, ans2 = 0;

    int l = 0, r = n - 1;
    bool turn = 1;
    while (l < r) {
        if (a[l] > a[r]) {
            if (turn) ans1 += a[l++];
            else ans2 += a[l++];
        } else {
            if (turn) ans1 += a[r--];
            else ans2 += a[r--];
        }
        turn = !turn;
    }
    if (turn) ans1 += a[l];
    else ans2 += a[l];

    cout << ans1 << " " << ans2 << '\n';
}