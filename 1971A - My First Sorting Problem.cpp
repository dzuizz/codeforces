#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int x, y; std::cin >> x >> y;
    if (x>y) std::swap(x, y);
    std::cout << x << " " << y << '\n';
  }
}
