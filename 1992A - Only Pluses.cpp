#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int a, b, c; std::cin >> a >> b >> c;
    for (int i=0; i<5; ++i) {
      if (a>b) std::swap(a, b);
      if (a>c) std::swap(a, c);
      if (b>c) std::swap(b, c);
      ++a;
    }
    std::cout << a*b*c << '\n';
  }
}
