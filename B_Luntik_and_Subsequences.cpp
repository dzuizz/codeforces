#include <iostream>
using namespace std;
typedef long long ll;

ll t, n, e, ones, zeros;

ll power(ll a, ll b){
    ll res = 1;
    for(ll i=0;i<b;i++){
        res *= a;
    }
    return res;
}

int main(){
    cin >> t;
    while(t--){
        ones = 0, zeros = 0;
        cin >> n;
        for(ll i=0;i<n;i++){
            cin >> e;
            if(e == 1) ones++;
            else if(e == 0) zeros++;
        }
        cout << power(2, zeros)*ones << endl;
    }
}