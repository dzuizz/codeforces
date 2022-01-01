#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll t, n, k;

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        ll cat = 0, ind = 0, ans = 0, arr[k];
        for(ll i=0;i<k;i++){
            cin >> arr[i];
        }
        sort(arr, arr+k, greater<ll>());
        while(cat < arr[ind]){
            cat += n - arr[ind];
            ans++, ind++;
        }
        cout << ans << endl;
    }
}