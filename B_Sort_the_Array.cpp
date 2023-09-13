#include<algorithm>
#include<iostream>
using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    int a[n], sorted[n];

    for (int i=0; i<n; i++) {
        cin >> a[i];
        sorted[i] = a[i];
    }
    sort(sorted, sorted+n);

    int l=-1, r=-1;
    for (int i=0; i<n; i++) {
        if (a[i] != sorted[i]) {
            if (l != -1) r = i;
            else l = i;
        }
    }

    if (l == -1) l = r = 0;
    for (int i=l; i<=r; i++) {
        if (a[i] != sorted[r-i+l] || a[r-i+l] != sorted[i]) {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n";
    cout << l+1 << " " << r+1 << '\n';

}