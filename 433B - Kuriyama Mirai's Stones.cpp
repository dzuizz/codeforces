#include <algorithm>
#include <iostream>
#define int long long

signed main() {
  int n; std::cin >> n;
  int a[2][n+1]; a[0][0]=a[1][0]=0;
  for (int i=1; i<=n; ++i) {
    std::cin >> a[1][i];
    a[0][i]=a[0][i-1]+a[1][i];
  } std::sort(a[1]+1, a[1]+n+1);
  for (int i=1; i<=n; ++i)
    a[1][i]=a[1][i-1]+a[1][i];
  int m; std::cin >> m;
  while (m--) {
    int t, l, r; std::cin >> t >> l >> r;
    std::cout << a[--t][r] - a[t][l-1] << '\n';
  }
}
