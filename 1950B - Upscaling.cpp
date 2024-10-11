#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int n; std::cin >> n;
    for (int i=0; i<2*n; ++i) {
      for (int j=0; j<2*n; ++j) std::cout << (((i>>1) + (j>>1) + 1)&1 ? '#' : '.');
      std::cout << '\n';
    }
  }
}
