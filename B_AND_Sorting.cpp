#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n], s[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s[i] = a[i];
        }

        sort(s, s + n);
        int ans = -1;

        for (int i = 0; i < n; i++) {  
            if (a[i] != s[i]) ans &= a[i];
        }
        cout << ans << endl;
    }
}