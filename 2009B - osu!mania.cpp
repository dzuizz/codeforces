#include <iostream>

int main() {
  int t, n; std::cin >> t;
  char c;
  while (t--) {
    std::cin >> n;
    int a[n];
    for (int i=0; i<n; ++i) for (int j=0; j<4; ++j) {
      std::cin >> c;
      if (c == '#') a[i] = j+1;
    }
    for (int i=n-1; i>=0; --i) std::cout << a[i] << " ";
    std::cout << '\n';
  }
}
