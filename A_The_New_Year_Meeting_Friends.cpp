#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int a[3];

int main() {
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a+3);
    cout << a[2] - a[0] << endl;
}