/*********************************HEADER**********************************

Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=1

Problem : https://codeforces.com/edu/course/2/lesson/5/2/practice
Example : https://ideone.com/LJJJB9

**************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

struct Segment {
  ll sum, lazy;
  
  Segment(ll s=1, ll l=1) {
    sum = s;
    lazy = l;
  }
};

const ll M = 1e9 + 7;

vector<Segment> segTree;
ll n, m;

ll mul(ll a, ll b) {
  a %= M, b %= M;
  return (a*b)%M;
}

void build(ll idx, ll l, ll r) {
  if(l == r) {
    segTree[idx].sum = 1;
    return;
  }
  ll mid = (l + r) / 2;
  build(2*idx, l, mid);
  build(2*idx+1, mid+1, r);
  segTree[idx].sum = (segTree[2*idx].sum + segTree[2*idx+1].sum) % M;
}

void change(ll idx, ll v) {
  segTree[idx].sum = mul(segTree[idx].sum,v);
  segTree[idx].lazy = mul(segTree[idx].lazy,v);
}

void propagate(ll idx, ll l, ll r) {
  if(segTree[idx].lazy == 1) return;
  
  ll mid = (l + r) / 2;
  if(l < r) {
    change(2*idx, segTree[idx].lazy);
    change(2*idx+1, segTree[idx].lazy);
  }
  segTree[idx].lazy = 1;
}

void update(ll idx, ll l, ll r, ll x, ll y, ll v) {
  if(l >= x && r <= y) {
    change(idx, v);
    return;
  }
  if(l > y || r < x) return;
  
  propagate(idx, l, r);
  
  ll mid = (l + r) / 2;
  update(2*idx, l, mid, x, y, v);
  update(2*idx+1, mid+1, r, x, y, v);
  segTree[idx].sum = (segTree[2*idx].sum + segTree[2*idx+1].sum) % M;
}

ll query(ll idx, ll l, ll r, ll x, ll y) {
  if(l >= x && r <= y) return segTree[idx].sum;
  if(l > y || r < x) return 0;
  
  propagate(idx, l, r);
  
  ll mid = (l + r) / 2;
  return (query(2*idx, l, mid, x, y) + query(2*idx+1, mid+1, r, x, y)) % M;
}

int main() {
  cin >> n >> m;
  
  segTree = vector<Segment>(4*n);
  build(1, 0, n-1);
  
  for(ll i = 0; i < m; i++) {
    
    // cout << ">> ";
    // for(ll i = 0; i < n; i++) {
    //   cout << query(i, 0, n-1, 0, n-1) << " ";
    // }
    // cout << '\n';
    
    ll type; cin >> type;
    if(type == 1) {
      ll l, r, v; cin >> l >> r >> v;
      update(1, 0, n-1, l, --r, v);
    } else {
      ll l, r; cin >> l >> r;
      cout << query(1, 0, n-1, l, --r) % M << endl;
    }
  }
}
