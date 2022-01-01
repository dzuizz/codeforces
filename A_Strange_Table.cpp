#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, m, c; cin >> n >> m >> c;
        ll row = c % n, col = (c - 1) / n;
        if(row == 0) row = n;
        cout << m * (row - 1) + col + 1 << endl;
    }
}