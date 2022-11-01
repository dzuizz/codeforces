#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n, l; cin >> n >> l;
    ll a[n];

    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    
    ll ans = 0;
    for (ll i = 0; i < n-1; i++) {
        ans = max(ans, a[i+1] - a[i]);
    }

    ll tmp = max(a[0], l-a[n-1]);
    if (tmp >= (double)(ans/2 + ans%2*0.5)) cout << tmp << endl;
    else if (!(ans%2)) cout << ans/2 << endl;
    else {
        cout << ans/2 << ".5" << endl;
    }
}