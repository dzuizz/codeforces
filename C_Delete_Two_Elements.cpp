#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

ll t, n, ans, sum, e;

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        ll arr[n];
        map<ll, ll> m;
        sum = 0, ans = 0;
        for(int i=0;i<n;i++){
            cin >> e;
            sum += e;
            e *= n;
            m[e]++;
            arr[i] = e;
        }
        for(int l=0;l<n;l++){
            if(arr[l]==sum) ans += m[sum]-1;
            else ans += m[sum*2 - arr[l]];
        }
        cout << ans/2 << endl;
    }
}