#include <iostream>
using namespace std;
typedef long long ll;

int n, m;

int main() {
    cin >> n >> m;
    int newSocks = n / m;
    while(newSocks > 0) {
        int a = newSocks;
        newSocks = (n % m + newSocks)/m;
        n += a;
    }
    cout << n << endl;
}