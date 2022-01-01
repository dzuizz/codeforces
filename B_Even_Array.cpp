#include <iostream>
using namespace std;
typedef long long ll;

#define fi first
#define se second

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        int a[n];
        pair<int, int> wrong = {0, 0}; // even, odd

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 != i % 2) {
                if(a[i] % 2 == 0) wrong.fi++;
                else wrong.se++;
            }
        }
        if(wrong.fi != wrong.se) cout << "-1\n";
        else cout << wrong.fi << '\n';
    }
}