#include <algorithm>
#include <iostream>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define fi first
#define se second

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    ii a[n];

    for(int i = 0; i < n; i++) {
      cin >> a[i].fi;
      a[i].se = i;
    }
    sort(a, a+n);
    cout << a[0].se + 1 << " " << a[n-1].se + 1 << endl;
  }
}