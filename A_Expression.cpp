#include <iostream>
using namespace std;
typedef long long ll;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    int ans = 0;
    ans = max(ans, a + b + c);
    ans = max(ans, a * b + c);
    ans = max(ans, a + b * c);
    ans = max(ans, a * (b+c));
    ans = max(ans, (a+b) * c);
    ans = max(ans, a * b * c);
    cout << ans << endl;
}