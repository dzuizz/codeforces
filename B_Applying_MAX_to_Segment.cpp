/*********************************HEADER**********************************

Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=1

Problem : https://codeforces.com/edu/course/2/lesson/5/1/practice
Example : https://ideone.com/LJJJB9

**************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

struct Segment {
  int maxi, lazy;
  Segment(int a=0, int b=0) {
    maxi = a;
    lazy = b;
  }
};

vector<Segment> segTree;
int n, m;

void change(int idx, int v) {
  segTree[idx].maxi = max(segTree[idx].maxi, v);
  segTree[idx].lazy = max(segTree[idx].lazy, v);
}

void propagate(int idx, int l, int r) {
  if(segTree[idx].lazy == 0) return;
  
  int mid = (l + r) / 2;
  if(l < r) {
    change(2*idx, segTree[idx].lazy);
    change(2*idx+1, segTree[idx].lazy);
  }
  segTree[idx].lazy = 0;
}

void update(int idx, int l, int r, int x, int y, int v) {
  if(l > y || r < x) return;
  if(l >= x && r <= y) {
    change(idx, v);
    return; // :D
  }
  
  propagate(idx, l, r);
  
  int mid = (l + r) / 2;
  update(2*idx, l, mid, x, y, v);
  update(2*idx+1, mid+1, r, x, y, v);
  segTree[idx].maxi = max(segTree[2*idx].maxi, segTree[2*idx+1].maxi);
}

int query(int idx, int l, int r, int x) {
  if(l == r) return segTree[idx].maxi;
  
  propagate(idx, l, r);
  
  int mid = (l + r) / 2;
  if(x <= mid) return query(2*idx, l, mid, x);
  else return query(2*idx+1, mid+1, r, x);
}

int main() {
  cin >> n >> m;
  
  segTree = vector<Segment>(4*n);
  
  for(int i=0; i<m; i++) {
    // cout << ">> ";
    // for(int l=0; l < n; l++) {
    //   cout << query(1, 0, n-1, l) << " ";
    // }
    // cout << '\n';
    
    int type; cin >> type;
    if(type == 1) {
      int l, r, v; cin >> l >> r >> v;
      update(1, 0, n-1, l, --r, v);
    } else {
      int l; cin >> l;
      cout << query(1, 0, n-1, l) << endl;
    }
  }
}