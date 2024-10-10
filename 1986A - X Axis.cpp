#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int a, b, c; std::cin >> a >> b >> c;
    if (a>b) std::swap(a,b);
    if (a>c) std::swap(a,c);
    if (b>c) std::swap(b,c);
    std::cout << c-a << '\n';
  }
}
