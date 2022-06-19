#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
  int t; cin >> t;
  while(t--) {
    int a, b; cin >> a >> b;
    if(a == 0 && b == 0) {
      cout << "0\n";
      continue;
    }
    
    double dist = sqrt(a*a + b*b);
    if (dist == (int) dist || a == 0 || b == 0) cout << "1\n";
    else cout << "2\n";
  }
}