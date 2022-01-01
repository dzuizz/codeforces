#include <iostream>
using namespace std;
typedef long long ll;

ll t, n;
const ll INF = 1e9;

int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        ll a[n], b[n], ans = 0;
        ll ma = INF, mb = INF;
        for(ll i = 0; i < n; i++ ) {
            cin >> a[i];
            ma = min(ma, a[i]);
        }
        for(ll i = 0; i < n; i++ ) {
            cin >> b[i];
            mb = min(mb, b[i]);
        }
        for(ll i = 0; i < n; i++ ) {
            ll a1 = a[i] - ma, b1 = b[i] - mb;
            ll tmp = min(a1, b1);
            ans += a1 + b1 - tmp;
        }
        cout << ans << endl;
    }
}