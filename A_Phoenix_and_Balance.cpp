#include <iostream>
using namespace std;
typedef long long ll;

int pow(int a, int b) {
    if(b == 0) return 1;
    return a * pow(a, b-1);
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        int cur = 2;
        int ans = pow(2, n);
        
        for(int i = 0; i < n/2-1; i++) {
            ans += cur;
            cur *= 2;
        }
        for(int i = n/2; i < n; i++) {
            ans -= cur;
            cur *= 2;
        }
        cout << ans << endl;
    }
}