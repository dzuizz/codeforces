#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, m; cin >> n >> m;
        cout << m*(m+1) / 2 + (n*(n+1) / 2) * m - m << endl;
    }
}

// 1 2
// 3 4
// 5 6