#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int ans=0, run=0;
        for (int i=0; i<n; i++) {
            int x; cin >> x;

            if (!x) run++;
            else run = 0;
            
            ans = max(ans, run);
        }

        cout << ans << '\n';
    }
}