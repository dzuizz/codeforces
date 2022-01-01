#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;
 
ll t, n, k;
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        ll ans = 0;

        ll updated = 1;
        cin >> n >> k;
        while(updated < n) {
            ll m = min(updated, k);
            if(m == updated) updated += m;
            else{
                ans += (n-updated)/k;
                if((n-updated)%k) ans++;
                break;
            }
            ans++;
        }
        cout << ans << endl;
    }
}