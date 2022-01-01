#include <iostream>
using namespace std;
typedef long long ll;

ll n, m, k;

bool check(ll a){
    ll x = max(0ll, a-k), y=max(0ll, a-n+k-1);
    return a*(a+1)/2 - x*(x+1)/2 + (a-1)*a/2 - y*(y+1)/2 <= m-n;
}

ll bin(ll l, ll r){
    ll mid = l + (r-l)/2;
    bool ch = check(mid);
    if(ch){
        if(l>=r-1) return mid;
        return bin(mid, r);
    }
    return bin(l, mid);
}

int main(){
    cin >> n >> m >> k;
    cout << bin(0, m)+1;
}