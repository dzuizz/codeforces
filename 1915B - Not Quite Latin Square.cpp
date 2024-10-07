#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int a=0, b=0, c=0;
    char ch;
    for (int i=0; i<9; ++i) {
      std::cin >> ch;
      if (ch == 'A') ++a;
      if (ch == 'B') ++b;
      if (ch == 'C') ++c;
    }
    if (a == 2) std::cout << "A\n";
    if (b == 2) std::cout << "B\n";
    if (c == 2) std::cout << "C\n";
  }
}
