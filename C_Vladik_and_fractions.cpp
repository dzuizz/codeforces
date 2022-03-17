#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    if(n == 1 || n * (n + 1) > 1e9) {
        cout << "-1\n";
        return 0;
    }
    cout << n << " " << n + 1 << " " << n*(n+1) << endl;
}