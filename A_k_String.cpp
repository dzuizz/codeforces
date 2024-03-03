#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; cin >> k;
    int cnt[26];
    memset(cnt, 0, sizeof(cnt));

    string s; cin >> s;
    for (auto &c : s) {
        cnt[c - 'a']++;
    }

    string ans = "";
    bool flag = 1;
    for (int i = 0; i < 26; i++) {
        if (cnt[i]) {
            if (cnt[i] % k) flag = 0;
            else {
                for (int j = 0; j < cnt[i] / k; j++) {
                    ans += ('a' + i);
                }
            }
        }
    }

    if (flag) {
        for (int i = 0; i < k; i++) {
            cout << ans;
        }
        cout << '\n';
    } else cout << "-1\n";
}