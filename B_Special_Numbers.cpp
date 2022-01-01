#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

const ll mod = 1e9+7;
string bin = "";
ll ans = 0;
ll t, n, k;

ll power(ll a, ll b){
    ll res = 1;
    for(ll i=0;i<b;i++){
        res *= a;
        res %= mod;
    }
    return res;
}

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        ans = 0;
        bin = "";
        while(k>0){
            if(k%2==0) bin += '0';
            else bin += '1';
            k /= 2;
        }
        for(int i=0;i<bin.length();i++){
            ans += (bin[i]-48)*power(n, i);
            ans %= mod;
        }
        cout << ans << endl;
    }
}