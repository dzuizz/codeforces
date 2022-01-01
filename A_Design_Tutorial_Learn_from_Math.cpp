#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    if(n % 2 == 0) {
        cout << "8 " << n - 8 << endl;
    }else cout << "9 " << n - 9 << endl;
}-