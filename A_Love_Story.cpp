#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    string x = "codeforces";

    while (t--) {
        string s; cin >> s;

        int ans=0;
        for (int i=0; i<s.size(); i++) {
            ans += s[i] != x[i];
        }

        cout << ans << '\n';
    }
}
