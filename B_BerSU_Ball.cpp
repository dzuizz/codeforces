#include<algorithm>
#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i=0; i<n; i++) cin >> a[i];

    int m; cin >> m;
    int b[m];

    for (int i=0; i<m; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+m);

    int i=0, j=0, ans=0;
    while (i<n && j<m) {
        if (abs(a[i]-b[j]) <= 1) {
            ans++, i++, j++;
        } else if (a[i] < b[j]) i++;
        else j++;
    }

    cout << ans << '\n';
}