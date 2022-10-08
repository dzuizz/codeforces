#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    string s; cin >> s;

    ll cur = 0, ans = 0;
    for (ll i = 0; i < s.size(); i++) {
        ll nx = s[i] - 'a';
        ans += min(abs(cur - nx), 26 - abs(cur - nx));
        cur = nx;
    }

    cout << ans << '\n';
}