#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n, greater<int>());
        int res = a[0];
        int ind = 1;
        while(res >= x) {
            
        }
    }
}