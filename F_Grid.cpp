#include <bits/stdc++.h>
using namespace std;

int a[22][22], ans;
char c;

int main() {
    for (int i = 1; i <= 21; ++i) for (int j = 1; j <= 21; ++j) {
        cin >> c;
        a[i][j] = c-'0';
        
        a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
    }

    for (int i = 4; i <= 21; ++i) for (int j = 4; j <= 21; ++j) {
        ans = max(ans, a[i][j] - a[i-4][j] - a[i][j-4] + a[i-4][j-4]);
    }

    cout << ans << '\n';
}