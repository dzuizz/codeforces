#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ind = 0, ans = 0;
        while(ind < n) {
            if(ans % 3 != 0 && ans % 10 != 3) ind++;
            ans++;
        }
        cout << ans - 1 << endl;
    }
}