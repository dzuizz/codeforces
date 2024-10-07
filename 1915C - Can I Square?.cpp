#include <iostream>
#include <cmath>

#define int long long

signed main() {
  int t; std::cin >> t;
  while (t--) {
    int n, summ=0; std::cin >> n;
    for (int i=0, e; i<n; ++i) {
      std::cin >> e;
      summ += e;
    }
    int x = sqrt(summ);
    std::cout << (x*x == summ ?"YES\n" : "NO\n");
  }
}
