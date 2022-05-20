#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        int ans = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = n-1; i > 0; i--) {
            if (a[i] > a[i-1]) continue;
            if (a[i] == 0) {
                ans = -1;
                break;
            }
            while (a[i] <= a[i-1]) {
                a[i-1] /= 2;
                ans++;
            }
        }
        cout << ans << endl;
    }
}
