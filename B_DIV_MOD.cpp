#include <iostream>
using namespace std;
typedef long long ll;

ll l, r, a;

ll f(ll n) {return n / a + n%a;}

int main() {
    ll t; cin >> t;
    while(t--) {
        cin >> l >> r >> a;
        ll n2 = max(((r / a) * a - 1), l);
        cout << (f(r) > f(n2) ? f(r) : f(n2)) << endl;
    }
}