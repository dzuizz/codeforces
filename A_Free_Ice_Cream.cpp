#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n, x; cin >> n >> x;

    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        char ch; cin >> ch;
        ll e; cin >> e;

        if (ch == '+') x += e;
        else {
            if (x >= e) x -= e;
            else cnt++;
        }
    }

    cout << x << " " << cnt << '\n';
}