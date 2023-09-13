#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;
        cout << (s[0]-'0')+(s[2]-'0') << '\n';
    }
}