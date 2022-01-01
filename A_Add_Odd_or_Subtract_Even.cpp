#include <iostream>
using namespace std;
typedef long long ll;

int t, a, b;

int main() {
    cin >> t;
    while(t--) {
        cin >> a >> b;
        if( a == b ) {
            cout << "0\n";
        }else if( a > b ) {
            int diff = a - b;
            if( diff%2 == 0 ) {
                cout << "1\n";
            }else{
                cout << "2\n";
            }
        }else{
            int diff = b - a;
            if( diff%2 == 0 ) {
                cout << "2\n";
            }else{
                cout << "1\n";
            }
        }
    }
}