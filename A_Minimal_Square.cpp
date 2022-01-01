#include <iostream>
using namespace std;
typedef long long ll;

int t, a, b;

int main() {
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if(a < b) swap(a, b);
        int n = max(a, b*2);
        cout << n*n << endl;
    }
}