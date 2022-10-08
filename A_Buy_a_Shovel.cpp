#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int k, r; cin >> k >> r;

    int ans = 10;
    int cur = k;
    for (int i = 0; i < 9; i++) {
        if ((cur - r) % 10 == 0 || cur % 10 == 0) {
            ans = i + 1;
            break;
        }
        cur += k;
    }

    cout << ans << '\n';
}