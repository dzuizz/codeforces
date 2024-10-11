#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int n, summ=0; std::cin >> n;
    for (int i=0, e; i<n; ++i) {
      std::cin >> e;
      summ += abs(e);
    }
    std::cout << summ << '\n';
  }
}
