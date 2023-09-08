#include<iostream>
using namespace std;

#define int long long

signed main() {
    int n, m; cin >> n >> m;

    int cnt=0;
    while (n<m) {
        n *= 2;
        cnt++;
    }

    int ans = cnt;
    while (n>m) {
        int x = (n-m)/(1<<cnt);
        n -= x*(1<<cnt);
        ans += x;
        cnt--;
    }

    cout << ans << '\n';
}