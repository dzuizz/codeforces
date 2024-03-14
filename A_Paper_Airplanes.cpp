#include <iostream>

int main() {
    int k, n, s, p; std::cin >> k >> n >> s >> p;
    std::cout << (k * ((n + s - 1) / s) + p - 1) / p << '\n';
}