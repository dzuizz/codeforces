/*********************************HEADER**********************************

Topic    : Advanced Data Structure (Segment Tree)
Problem  : https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/A
Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=2

**************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

#define fi first
#define se second

typedef long long ll;
typedef pair<ll, ll> p;

struct Segment {
  ll pref, suff, maxi, sum;
  
  Segment(ll pre = 0, ll suf = 0, ll m = 0, ll s = 0) {
    pref = pre;
    suff = suf;
    maxi = m;
    sum = s;
  }
  
  // void print() {
  //   printf("(%d,%d,%d,%d)", pref, suff, maxi, sum);
  // }
};

ll n, m;
vector<ll> a;
const ll INF = 1e9;
vector<Segment> segTree;

Segment merge(Segment a, Segment b) {
  Segment res;
  res.pref = max(a.pref, a.sum + b.pref);
  res.suff = max(b.suff, b.sum + a.suff);
  res.maxi = max(max(a.maxi, b.maxi), a.suff + b.pref);
  res.sum  = a.sum + b.sum;
  
  // a.print(); 
  // cout << " + ";
  // b.print();
  // cout << " = ";
  // res.print();
  // cout << '\n';
  
  return res;
}

void build(ll idx = 1, ll l = 0, ll r = n - 1) {
  if(l == r) {
    ll big = max(a[l], (ll)0);
    segTree[idx] = Segment(big, big, big, a[l]);
    return;
  }
  ll mid = (l + r) / 2;
  build(2 * idx, l, mid);
  build(2 * idx + 1, mid + 1, r);
  segTree[idx] = merge(segTree[2*idx], segTree[2*idx+1]);
}

void update(ll idx, ll l, ll r, ll x, ll u) {
  if(l == r) {
    ll big = max(u, 0ll);
    segTree[idx] = Segment(big, big, big, u);
    return;
  }
  ll mid = (l + r) / 2;
  if (x <= mid) update(2 * idx, l, mid, x, u);
  else update(2 * idx + 1, mid + 1, r, x, u);
  segTree[idx] = merge(segTree[2*idx], segTree[2*idx+1]);
}

void query() {cout << segTree[1].maxi << endl;}

int main() {
  cin >> n >> m;
  
  a = vector<ll>(n+2);
  segTree = vector<Segment>(4*n+2);
  
  for(ll i = 0; i < n; i++) cin >> a[i];
  
  build();
  
  // cout << segTree[1].pref << ' ' << segTree[1].suff << ' ' << segTree[1].maxi << '\n';
  
  query();
  for(ll i = 0; i < m; i++) {
    ll a, b; cin >> a >> b;
    update(1, 0, n - 1, a, b);
    query();
  }
  return 0;
}
