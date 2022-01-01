/*********************************HEADER**********************************

Topic    : Advanced Data Structure (Segment Tree)
Problem  : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=2

**************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

#define fi first
#define se second

typedef long long ll;
typedef pair<ll, ll> p;

ll n, m;
vector<ll> a;
const int INF = 1e9;
vector<p> segTree;

p merge(p a, p b) {
  if(a.fi < b.fi) return a;
  else if(a.fi == b.fi) return p(a.fi, a.se + b.se);
  else return b; 
}

void build(ll idx = 1, ll l = 0, ll r = n - 1) {
  if(l == r) {
    segTree[idx] = p(a[l], 1);
    return;
  }
  ll mid = (l + r) / 2;
  build(2 * idx, l, mid);
  build(2 * idx + 1, mid + 1, r);
  segTree[idx] = merge(segTree[2*idx], segTree[2*idx+1]);
}

void update(ll idx, ll l, ll r, ll x, ll u) {
  if(l == r) {
    segTree[idx].fi = u;
    return;
  }
  ll mid = (l + r) / 2;
  if (x <= mid) update(2 * idx, l, mid, x, u);
  else update(2 * idx + 1, mid + 1, r, x, u);
  segTree[idx] = merge(segTree[2 * idx], segTree[2 * idx + 1]);
}

p query(ll idx, ll l, ll r, ll x, ll y) {
  if ( l > y || r < x) return p(INF, 1);
  if ( l >= x && r <= y ) return segTree[idx];
  ll mid = (l + r) / 2;
  return merge(query(2 * idx, l, mid, x, y), query(2 * idx + 1, mid + 1, r, x, y));
}

int main() {
  cin >> n >> m;
  
  a = vector<ll>(n);
  segTree = vector<p>(4*n);
  
  for(ll i = 0; i < n; i++) cin >> a[i];
  
  build();
  
  for(ll i = 0; i < m; i++) {
    ll a, b, c; cin >> a >> b >> c;
    if(a == 1) {
      update(1, 0, n-1, b, c);
    } else {
      p ans = query(1, 0, n - 1, b, c - 1);
      cout << ans.fi << " " << ans.se << endl;
    }
  }
  return 0;
}