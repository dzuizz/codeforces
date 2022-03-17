/*********************************HEADER**********************************

Topic    : Advanced Data Structure (Segment Tree)
Problem  : https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/B
Jamboard : https://jamboard.google.com/d/1sJt51tfL7o2SpnsceJ_SHVXMnuV3VORSMH0kRF_QzYo/viewer?f=2

**************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int n, m;
vector<int> arr, segTree;

void build(int idx = 1, int l = 0, int r = n - 1) {
  if(l == r) {
    segTree[idx] = arr[l];
    return;
  }
  int mid = (l + r) / 2;
  build(2 * idx, l, mid);
  build(2 * idx + 1, mid + 1, r);
  // [L .. m | m+1 .. R]
  segTree[idx] = segTree[2 * idx] + segTree[2 * idx + 1];
}

void update(int idx, int l, int r, int x) {
  if(l == r) {
    segTree[idx] = (arr[l] + 1) % 2;
    arr[l] = segTree[idx];
    // int x = 0/1;
    // x = (x+1)%2;
    // x = 1-x;
    // x ^= 1; // xor
    return;
  }
  int mid = (l + r) / 2;
  if(x <= mid) update(2 * idx, l, mid, x);
  else update(2 * idx + 1, mid + 1, r, x);
  segTree[idx] = segTree[2 * idx] + segTree[2 * idx + 1];
}

int query(int idx, int l, int r, int x, int y) {
  if(l > y || r < x) return 0;
  if(l >= x && r <= y) return segTree[idx];
  int mid = (l + r) / 2;
  return query(2 * idx, l, mid, x, y) + query(2 * idx + 1, mid + 1, r, x, y);
}

int search(int idx, int l, int r, int x) {
  // a[l..r]
  if (segTree[idx] < x) return -1;
  if (l == r) return l;
  int mid = (l+r)/2;
  if (x <= segTree[2*idx]) return search(2*idx,l,mid,x);
  else return search(2*idx+1,mid+1,r,x-segTree[2*idx]);
}

// [1 1 1 | 1 0 1] -> 4
// [1 1 1] [1 0 1]

int main() {
  cin >> n >> m;
  
  arr = vector<int>(n);
  for(int i = 0; i < n; i++) cin >> arr[i];
  
  segTree = vector<int>(4 * n + 2);
  build();
  
  for(int i = 0; i < m; i++) {
    int a, k; cin >> a >> k;
    if(a == 1) update(1, 0, n - 1, k);
    else {
      k++;
      cout << search(1,0,n-1,k) << '\n';
      // int l = 0, r = n - 1, ans = -1;
      // while(l <= r) {
      //   int mid = (l + r) / 2;
      //   int q = query(1, 0, n - 1, 0, mid);
      //   // cout << mid << " -> " << q << '\n';
      //   if(q == k && arr[mid] == 1) {
      //     ans = mid;
      //     break;
      //   }
      //   else if(q >= k) r = mid - 1;
      //   else l = mid + 1;
      // }
      // cout << ans << endl;
    }
  }
}

// N <= 2e6
// O(N log2 N)

// [L . | .... | . R]

// Binary search -> 5 * log2 N -> TLEx
// Binary search with Golden ratio -> 2 * log2 N -> TLE
// Ternary search -> log3 N -> no