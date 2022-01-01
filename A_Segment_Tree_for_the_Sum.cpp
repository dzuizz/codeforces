/*********************************HEADER**********************************

Topic    : Advanced Data Structure (Segment Tree)
Problem  : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=2

**************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

ll n, m;
vector<ll> segTree, a;

void build(ll idx = 1, ll l = 0, ll r = n - 1) {
  if(l == r) {
    segTree[idx] = a[l];
    return;
  }
  ll mid = (l + r) / 2;
  build(2 * idx, l, mid);
  build(2 * idx + 1, mid + 1, r);
  segTree[idx] = segTree[2 * idx] + segTree[2 * idx + 1];
}

void update(ll idx, ll l, ll r, ll x, ll u) {
  if(l == r) {
    segTree[idx] = u;
    return;
  }
  ll mid = (l + r) / 2;
  if (x <= mid) update(2 * idx, l, mid, x, u);
  else update(2 * idx + 1, mid + 1, r, x, u);
  segTree[idx] = segTree[2 * idx] + segTree[2 * idx + 1];
}

ll query(ll idx, ll l, ll r, ll x, ll y) {
  if ( l > y || r < x) return 0;
  if ( l >= x && r <= y ) return segTree[idx];
  ll mid = (l + r) / 2;
  return query(2 * idx, l, mid, x, y) + query(2 * idx + 1, mid + 1, r, x, y);
}

int main() {
  cin >> n >> m;
  
  a = vector<ll>(n);
  segTree = vector<ll>(4*n);
  
  for(ll i = 0; i < n; i++) cin >> a[i];
  
  build();
  
  for(ll i = 0; i < m; i++) {
    ll a, b, c; cin >> a >> b >> c;
    if(a == 1) {
      update(1, 0, n-1, b, c);
    } else {
      cout << query(1, 0, n - 1, b, c - 1) << endl;
    }
  }
  return 0;
}