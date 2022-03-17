#include <iostream>
using namespace std;
typedef long long ll;

ll n, l, r;

ll findPowerof2(ll n) {
    ll res = 1;
    while(res <= n) res *= 2;
    return res / 2;
}

ll divideAndConquer(ll curVal, ll prevNodes) {
    if(curVal == 0) return curVal;

    ll leng = findPowerof2(curVal) * 2 - 1;
    ll mid = (leng + 1) / 2 + prevNodes;

    if(l <= mid && mid <= r) return curVal % 2 + divideAndConquer(curVal / 2, prevNodes) + divideAndConquer(curVal / 2, mid);
    else if(mid > r) return divideAndConquer(curVal / 2, prevNodes);
    return divideAndConquer(curVal / 2, mid);
}

int main() {
    cin >> n >> l >> r;
    ll ans = divideAndConquer(n, 0);
    cout << ans << endl;
}