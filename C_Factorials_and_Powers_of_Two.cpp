#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

const ll MAX_FACT = 1e12;
const ll INF = 1e9;
vector<ll> facts;

ll getBinary(ll n) {
    ll res = 0;
    while (n > 1) {
        res += n%2;
        n /= 2;
    }
    if (n) res++;
    return res;
}

int main() {
    ll fact = 6, fact_mul = 4;
    while (fact < MAX_FACT){
        facts.push_back(fact);

        fact *= fact_mul;
        fact_mul++;
    }

    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll mx = -1, ans = INF;

        for (int i = facts.size() - 1; i >= 0; i--) {
            if (facts[i] <= n) {
                mx = i;
                break;
            }
        }

        if (mx < 0) ans = getBinary(n);
        else {
            for (int i = 0; i < (1 << (mx + 1)); i++) {
                ll e = n, res = 0;
                for (ll j = 0; j <= mx; j++) {
                    if ((i >> j)&1) {
                        e -= facts[j];
                        res++;
                    }
                }
                // cout << "<< " << i << endl;
                if (e < 0) continue;
                ans = min(ans, res + getBinary(e));
                // cout << mx << " " << getBinary(e) << endl;
                // cout << ">> " << e << endl;
            }
        }
        cout << ans << endl;
    }
}
