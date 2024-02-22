#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt = 0; cin >> n;
    string ans = "";

    for (int i=0; i<n; ++i) {
        char ch; cin >> ch;

        if (ch == '5') cnt++;
        else ans += '0';
    }

    for (int i=0; i<cnt-cnt%9; ++i) {
        ans = '5' + ans;
    }

    if (ans[0] == '0') ans = "0";
    cout << (ans[ans.size() - 1] == '0' ? ans : "-1") << '\n';
}