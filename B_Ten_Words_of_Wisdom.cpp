#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        int mx=0, ans=0;
        for (int i=0; i<n; i++) {
            int a, b; cin >> a >> b;

            if (a>10) continue;
            if (mx < b) mx=b, ans=0;
            if (mx == b) ans=i+1;
        }

        cout << ans << '\n';
    }
}