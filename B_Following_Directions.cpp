#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int x=0, y=0;
        bool flag=0;

        for (char ch : s) {
            if (ch == 'U') y++;
            if (ch == 'L') x--;
            if (ch == 'D') y--;
            if (ch == 'R') x++;

            if (x == 1 && y == 1) flag = 1;
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }
}