#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n, t, k, d; cin >> n >> t >> k >> d;

    int ans1 = (n + k - 1) / k * t;

    int ans2 = 0, cnt = 0;
    while (cnt < n) {
        if (ans2 >= d) cnt += k;
        cnt += k;
        ans2 += t;
    }

    int ans3 = d; cnt = d / t * k;
    while (cnt < n) {
        cnt += k * 2;
        ans3 += t;
    }
    ans2 = min(ans2, ans3);

    if (ans2 < ans1) cout << "YES\n";
    else cout << "NO\n";
}