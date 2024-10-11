#include <iostream>
#define int long long

signed main() {
  int t; std::cin >> t;
  while (t--) {
    int n, k; std::cin >> n >> k;
    std::cout << (((n + k - 1) / k) * k + n - 1) / n << '\n';
  }
}
