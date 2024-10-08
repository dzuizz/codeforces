#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int ans=0;
    for (int i=1; i<=10; ++i) for (int j=1; j<=10; ++j) {
      char c; std::cin >> c;
      if (c=='.') continue;
      int x=(i>5?11-i:i), y=(j>5?11-j:j);
      ans += std::min(x,y);
    }
    std::cout << ans << '\n';
  }
}
