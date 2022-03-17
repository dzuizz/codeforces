#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, l; cin >> n >> l;

        int a[n], cnt[l];
        memset(cnt, 0, sizeof(cnt));

        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 0; i < n; i++) {
            for(int r = 0; r < l; r++) {
                if(a[i]%2 == 1) cnt[r]++;
                a[i] /= 2;
            }
        }

        int ans = 0, c = 1;
        for(int i = 0; i < l; i++) {
            if(cnt[i] > n - cnt[i]) ans += c;
            c *= 2;
        }
        
        cout << ans << endl;
    }
}