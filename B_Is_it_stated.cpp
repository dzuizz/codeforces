#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s, ans = "NO"; cin >> s;
        for (int i = 1; i < s.size(); ++i) if (s[i-1] == 'i' && s[i] == 't') ans = "YES";
        cout << ans << '\n';
    }
};