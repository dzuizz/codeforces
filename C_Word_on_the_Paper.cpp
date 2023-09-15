#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string ans="";
        
        for (int i=0; i<8; i++) for (int j=0; j<8; j++) {
            char ch; cin >> ch;
            if (ch != '.') ans += ch;
        }

        cout << ans << '\n';
    }
}