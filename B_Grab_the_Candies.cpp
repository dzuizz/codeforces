#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int parity[2] = {0,0};

        for (int i=0; i<n; i++) {
            int x; cin >> x;
            parity[x%2] += x;
        }

        cout << (parity[0] > parity[1] ? "YES\n" : "NO\n");
    }
}