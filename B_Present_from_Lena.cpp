#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < i; j++) cout << j << " ";
        cout << i;
        for (int j = i - 1; j >= 0; j--) cout << " " << j;
        cout << '\n';
    }

    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < i; j++) cout << j << " ";
        cout << i;
        for (int j = i - 1; j >= 0; j--) cout << " " << j;
        cout << '\n';
    }
}