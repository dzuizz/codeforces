#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    std::string s; std::cin >> s;
    bool flag = true;
    for (int i=1; i<(int)s.size() && flag; ++i) {
      if (s[i] != s[0]) std::swap(s[0], s[i]), flag = false;
    }
    if (flag) std::cout << "NO\n";
    else std::cout << "YES\n" << s << '\n';
  }
}
