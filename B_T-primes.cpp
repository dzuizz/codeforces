#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;

const ll MAXN = 1000001;
bool prime[MAXN];

int main() {

    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (ll i = 2; i < MAXN; i++) {
        if (prime[i]) {
            for (ll l = i * 2; l < MAXN; l += i) prime[l] = 0;
        }
    }

    ll n, e; cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> e;
        double sqr = sqrt(e);
        cout << (sqr == floor(sqr) && prime[(ll)(floor(sqr))] ? "YES\n" : "NO\n");
    }
}