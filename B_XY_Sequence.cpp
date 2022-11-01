#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll t; cin >> t;
    while (t--) {
      ll n, b, x, y; cin >> n >> b >> x >> y;
      
      ll cur = 0, sum = 0;
      while (n--) {
        if (cur + x > b) cur -= y;
        else cur += x;
        sum += cur;
      }
      cout << sum << endl;
    }
}