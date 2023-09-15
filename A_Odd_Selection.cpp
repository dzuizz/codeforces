#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        int parity[2] = {0,0};

        for (int i=0; i<n; i++) {
            int a; cin >> a;
            parity[a%2]++;
        }

        if (!parity[1]) {
            cout << "No\n";
            continue;
        }

        int mx = parity[1];
        if (!(mx%2)) mx--;

        if (x%2) {
            if (x <= mx || x-mx <= parity[0]) cout << "Yes\n";
            else cout << "No\n";
        } else {
            if (parity[0] && (x <= mx || x-mx <= parity[0])) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}