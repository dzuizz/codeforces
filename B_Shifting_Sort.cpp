/*********************************HEADER**********************************

Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=1

Problem : https://vjudge.net/contest/484765
https://codingcompetitions.withgoogle.com/kickstart/round/00000000004362d6/00000000008b3a1c

https://uhunt.onlinejudge.org/

Segment Tree
Example : {
  array: https://ideone.com/LJJJB9 ,
  poller: https://ideone.com/dyJ2kv
}

Convex Hull
Example : https://ideone.com/0JIY6q

Matrix Exponentiation : https://ideone.com/uDCb6o
Contest : https://vjudge.net/contest/488578

Intersections:
Example : https://ideone.com/Gcj0Fu
https://www.spoj.com/problems/HORRIBLE/

https://vjudge.net/contest/467726#overview

**************************************************************************/
// 2 3 4 5 1
// 1 3 4 5 2
// 1 2 4 5 3
// 1 2 3 5 4
// 1 2 3 4 5

// 2 3 4 1 5
// >> 1 4 3 == 1 2 3 4 5

// 3 2 1 5 4
// >> 1 3 2 == 1 3 2 5 4

#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

vector<ll> v, a, b, c, sorted_v;

void shift(int l, int r) {
  for (int i = l; i <= r; i++) swap(v[r],v[i]);
}

int main() {  
  ll t; cin >> t;
  
  while (t--) {
    ll n, ind, ans = 0;
    cin >> n;

    v = vector<ll>(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    sorted_v = v;
    sort(sorted_v.begin(), sorted_v.end());
    
    a.clear();
    b.clear();
    c.clear();
    
    for (ll i = 0; i < n; i++) {
      ind = find(v.begin() + i, v.end(), sorted_v[i]) - v.begin();
      if (ind == i || v[i] == sorted_v[i]) continue;
      a.push_back(i+1);
      b.push_back(ind+1);
      c.push_back(ind-i);
      ans++;
      shift(i, ind);
    }
    
    cout << ans << endl;
    for (int i = 0; i < a.size(); i++) {
      cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
  } 
}
