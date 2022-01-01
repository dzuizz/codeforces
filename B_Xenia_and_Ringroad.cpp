#include <iostream>
using namespace std;
typedef long long ll;

ll n, m;

int main() {
    cin >> n >> m;
    ll a[m];
    for(ll i = 0; i < m; i++) {
        cin >> a[i];
    }
    ll ans = a[0] - 1;
    for(ll i = 1; i < m; i++ ) {
        if(a[i] < a[i-1]) {
            ans += n - a[i-1] + a[i];
        }else if(a[i] > a[i-1]) {
            ans += a[i] - a[i-1];
        }
    }
    cout << ans << endl;
}