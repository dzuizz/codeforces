#include <iostream>

int main() {
  int T; std::cin >> T;
  while (T--) {
    char x, y;
    std::string a, b;
    std::cin >> x >> a >> y >> b;
    std::cout << y << a << " " << x << b << '\n';
  }
}
