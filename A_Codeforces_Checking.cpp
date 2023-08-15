#include<iostream>
#include<unordered_map>
using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    string s = "codeforces";

    unordered_map<char, bool> m;
    for (char ch : s) m[ch] = 1;

    while (n--) {
        char x; cin >> x;
        cout << (m[x] ? "YES" : "NO") << '\n';
    }
}