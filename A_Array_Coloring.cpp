#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int a[n], parity[2] = {0,0};

        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) parity[a[i]%2]++;

        cout << (parity[1]%2 ? "NO" : "YES") << '\n';
    }
}