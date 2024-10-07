#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int n, a, b; std::cin >> n >> a >> b;
    std::cout << std::min(2*a, b) * (n/2) + a * (n%2) << '\n';
  }
}
