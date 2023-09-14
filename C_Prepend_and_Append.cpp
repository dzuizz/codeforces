#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int l=0, r=s.size()-1;

        while (l<r) {
            if (s[l] == s[r]) break;
            l++, r--;
        }

        cout << r-l+1 << '\n';
    }
}