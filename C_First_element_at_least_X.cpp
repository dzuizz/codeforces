/*********************************HEADER**********************************

Topic    : Advanced Data Structure (Segment Tree)
Problem  : https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/B
Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=2

**************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

typedef pair<int, int> ii;

int n, m;
vector<int> a;
vector<int> segTree; // Max Element

void build(int idx = 1, int l = 0, int r = n - 1) {
  if(l == r) {
    segTree[idx] = a[l];
    return;
  }
  int mid = (l + r) / 2;
  build(2 * idx, l, mid);
  build(2 * idx + 1, mid + 1, r);
  segTree[idx] = max(segTree[2 * idx], segTree[2 * idx + 1]);
}

void update(int idx, int l, int r, int x, int u) {
  if(l == r) {
    segTree[idx] = u;
    a[l] = u;
    return;
  }
  int mid = (l + r) / 2;
  if(x <= mid) update(2 * idx, l, mid, x, u);
  else update(2 * idx + 1, mid + 1, r, x, u);
  segTree[idx] = max(segTree[2 * idx], segTree[2 * idx + 1]);
}

int search(int idx, int l, int r, int x) {
  // Base cases
  if (segTree[idx] < x) return -1;
  if(l == r) {
    return l; // or r
  }
  // Recurrence
  int mid = (l + r) / 2;
  if(segTree[2 * idx] >= x) return search(2 * idx, l, mid, x);
  else return search(2 * idx + 1, mid + 1, r, x);
}

// [10]
// 2 15 -> -1 -> 0

// [1 1 1 | 1 0 1] -> 4
// [1 1 1] [1 0 1]

int main() {
  cin >> n >> m;
  
  segTree = vector<int>(4 * n);
  a = vector<int>(n);
  
  for(int i = 0; i < n; i++) cin >> a[i];
  
  build();
  for(int i = 0; i < m; i++) {
    int a; cin >> a;
    if(a == 1) {
      int i, v; cin >> i >> v;
      update(1, 0, n - 1, i, v);
    } else {
      int x; cin >> x;
      cout << search(1, 0, n - 1, x) << endl;
    }
    // cout << i << '\n';
  }
  
  return 0;
}

// N <= 2e6
// O(N log2 N)

// [L . | .... | . R]

// Binary search -> 5 * log2 N -> TLEx
// Binary search with Golden ratio -> 2 * log2 N -> TLE
// Ternary search -> log3 N -> no