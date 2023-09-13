#include<algorithm>
#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;

    for (int i=0; i<n; i++) {
        int a, b, c; cin >> a >> b >> c;
        int mn = min({a, b, c});
        
        cout << (a+b+c-mn >= 10 ? "YES" : "NO") << '\n';
    }
}