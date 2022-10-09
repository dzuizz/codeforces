#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define pb push_back
#define fi first
#define se second

int main() {
    ll a, b; cin >> a >> b;
    if (b - a <= 1) {
        cout << "-1\n";
        return 0;
    }

    if (a % 2 == 1) {
        if (b - a <= 2) {
            cout << "-1\n";
            return 0;
        } else {
            a++;
        }
    }
    cout << a << " " << a + 1 << " " << a + 2 << '\n';
}