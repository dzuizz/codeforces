#include <iostream>
using namespace std;
typedef long long ll;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b; cin >> a >> b;

    int x = 6 - max(a, b) + 1;
    int y = 6;

    int tmp = gcd(x, y);
    x /= tmp;
    y /= tmp;
    
    cout << x << "/" << y << '\n';
}