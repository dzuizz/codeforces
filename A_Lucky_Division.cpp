#include <iostream>
using namespace std;
typedef long long ll;

ll n;

bool isLuckyNumber(ll n) {
    // check if all digits of n are 4 or 7
    while (n > 0) {
        if (n % 10 != 4 && n % 10 != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    cin >> n;
    for(ll i=1; i<=n; i++) {
        if ( n%i == 0 && isLuckyNumber(i)) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}