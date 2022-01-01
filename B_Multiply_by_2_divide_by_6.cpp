#include <iostream>
using namespace std;
typedef long long ll;

int t, n;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt2 = 0, cnt3 = 0;
        while (n) {
            if (n % 2 == 0) {
                n /= 2;
                cnt2++;
            } else if (n % 3 == 0) {
                n /= 3;
                cnt3++;
            } else {
                break;
            }
        }
        if( n == 1 && cnt2 <= cnt3) {
            cout << 2 * cnt3 - cnt2 << endl;
        } else {
            cout << -1 << endl;
        }
    }
}