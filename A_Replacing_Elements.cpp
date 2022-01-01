#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, d; cin >> n >> d;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        if(a[n-1] <= d || a[0] + a[1] <= d) cout << "YES\n";
        else cout << "NO\n";
    }
}