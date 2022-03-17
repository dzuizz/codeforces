/*********************************HEADER**********************************

Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=1

Problem : https://codeforces.com/edu/course/2/lesson/5/1/practice
Example : https://ideone.com/LJJJB9

**************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

struct Segment {
  ll val, lazy;
  
  Segment(ll v=0ll, ll l=-1) {
    val = v;
    lazy = l;
  }
};

vector<Segment> segTree;

void change(int idx, int v) {
  segTree[idx].val = v;
  segTree[idx].lazy = v;
}

void propagate(ll idx, ll l, ll r) {
  if(segTree[idx].lazy == -1) return;
  
  ll mid = (l + r) / 2;
  if(l < r) {
    change(2*idx, segTree[idx].lazy);
    change(2*idx+1, segTree[idx].lazy);
  }
  segTree[idx].lazy = -1;
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
}

ll query(ll idx, ll l, ll r, ll x) {
  if(l == r) return segTree[idx].val;
  
  propagate(idx, l, r);
  
  ll mid = (l + r) / 2;
  if(x <= mid) return query(2*idx, l, mid, x);
  else return query(2*idx+1, mid+1, r, x);
}

int main() {
  ll n, m; cin >> n >> m;
  
  segTree = vector<Segment>(4*n);
  
  for(ll i = 0; i < m; i++) {
    ll type; cin >> type;
    if(type == 1) {
      ll l, r, v; cin >> l >> r >> v;
      update(1, 0, n-1, l, --r, v);
    } else {
      ll l; cin >> l;
      cout << query(1, 0, n-1, l) << endl;
    }
  }
}
