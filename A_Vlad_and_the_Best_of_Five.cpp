#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a[2] = {0, 0};
        for (int i = 0; i < 5; ++i) {
            char ch; cin >> ch;
            ++a[ch - 'A'];
        }
        cout << (a[0] > a[1] ? "A\n" : "B\n");
    }
}