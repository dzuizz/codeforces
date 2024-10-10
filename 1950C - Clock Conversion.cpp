#include <iostream>
#include <iomanip>

int main() {
  int t, a, b; std::cin >> t;
  while (t--) {
    char c; std::cin >> a >> c >> b;
    std::cout << std::setfill('0') << std::setw(2) << (a+11)%12+1 << ":" << std::setw(2) << b << (a<12?" AM\n":" PM\n");
  }
}
