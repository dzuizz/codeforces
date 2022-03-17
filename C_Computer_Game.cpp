
/*********************************HEADER**********************************

Topic    : Advanced Data Structure (Segment Tree)
Problem  : https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/D
Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=1

Binary Search : https://vjudge.net/contest/431270
Pass          : gogetgold

**************************************************************************/

#include<iostream>
using namespace std;
typedef long long ll;

ll q, k, n, a, b;

bool valid(ll mid) {
    return a * mid + b * (n - mid) < k;
}

int main() {
    cin >> q;
    while(cin >> k >> n >> a >> b) {
        
        ll ans = -1;
        
        ll l = 0, r = n;
        while(l <= r) {
            ll mid = (l + r) / 2;
            // cout << mid << " -> " << valid(mid) << '\n';
            if(valid(mid)) {
                ans = mid;
                l = mid + 1;
            } else r = mid - 1;
        }
        
        cout << ans << endl;
    }
}



