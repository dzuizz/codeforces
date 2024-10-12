#include <iostream>
#include <algorithm>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int n, k; std::cin >> n >> k;
    int a[n]; for (int i=0; i<n; ++i) std::cin >> a[i];
    std::sort(a, a+n);
    int ans=1, run=1;
    for (int i=n-1; i>0; --i) {
      a[i] -= a[i-1];
      if (a[i] <= k) ans = std::max(ans, ++run);
      else run = 1;
    }
    std::cout << n-ans << '\n';
  }
}
