#include<iostream>
using namespace std;

int ans, ind, tmp, n, e;
int cnt[5];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> e;
        cnt[e]++;
    }

    tmp = min(cnt[1], cnt[3]);
    ans = cnt[4] + tmp + cnt[2]/2;
    cnt[1] -= tmp;
    cnt[3] -= tmp;
    cnt[2] %= 2;
    ans += cnt[1]/4 + cnt[3];
    cnt[1] %= 4;
    if (cnt[1] == 0 && cnt[1] == cnt[2]) ans = ans;
    else {
        if (cnt[2] && cnt[1] > 2) ans++;
        ans++;
    }

    cout << ans << endl;
}
