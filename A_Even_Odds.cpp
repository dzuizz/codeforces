#include <iostream>
using namespace std;
typedef long long ll;

ll n, k;

int main() {
    cin >> n >> k;
    ll half = n / 2;
    if(n%2 == 1) half++;
    if(k <= half) {
        cout << k*2-1 << endl;
    } else {
        cout << (k-half)*2 << endl;
    }
}