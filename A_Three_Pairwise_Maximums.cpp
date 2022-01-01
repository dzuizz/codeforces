#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b) {
            if(a < c) cout << "NO\n";
            else {
                cout << "YES\n";
                cout << a << " " << c << " " << c << endl;
            }
        }
        else if(a == c) {
            if(a < b) cout << "NO\n";
            else {
                cout << "YES\n";
                cout << a << " " << b << " " << b << endl;
            }
        }
        else if(b == c) {
            if(b < a) cout << "NO\n";
            else {
                cout << "YES\n";
                cout << a << " " << a << " " << c << endl;
            }
        }
        else {
            cout << "NO\n";
        }
    }
}