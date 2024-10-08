#include <iostream>

int main() {
  int t; std::cin >> t;
  while (t--) {
    int n, m; std::cin >> n >> m;
    int cnt[7]={0,0,0,0,0,0,0};
    for (int i=0; i<n; ++i) {
      char c; std::cin >> c;
      ++cnt[c-'A'];
    }
    int ans=0;
    for (int i=0; i<7; ++i)
      ans += std::max(m-cnt[i], 0);
    std::cout << ans << '\n';
  }
}
