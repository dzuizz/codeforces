#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ind = 0;
        int m; cin >> m;
        
        for (int i = 0; i < m; i++) {
            int x; cin >> x;
            ind = (ind + x%n)%n;
        }

        cout << a[ind%n] << endl;
    }
}