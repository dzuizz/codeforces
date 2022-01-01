#include <iostream>
using namespace std;
typedef long long ll;

int t, w, h, n;

int main() {
    cin >> t;
    while (t--) {
        int sheets = 1;
        cin >> w >> h >> n;
        while(w%2 == 0) {
            w /= 2;
            sheets *= 2;
        }
        while(h%2 == 0) {
            h /= 2;
            sheets *= 2;
        }
        if(sheets >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}