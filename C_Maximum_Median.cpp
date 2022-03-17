/*********************************HEADER**********************************

Topic    : Advanced Data Structure (Segment Tree)
Problem  : https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/D
Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=1

Binary Search : https://vjudge.net/contest/431270
Pass          : gogetgold

**************************************************************************/

#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

ll n, k;
vector<ll> v;

bool valid(ll mid) {
    ll res = 0;
    for(ll i = n / 2; i < n; i++) {
        if(v[i] >= mid) break;
        res += mid - v[i];
    }
    return res <= k;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> k;
    
    v = vector<ll>(n);
    
    for(ll i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    ll ans = 0;
    
    ll l = v[n / 2], r = v[n / 2] + k;
    while (l <= r) {
        ll mid = (l+r)/2;
    
        if(valid(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
  
    cout << ans << endl;
  
    return 0;
}

