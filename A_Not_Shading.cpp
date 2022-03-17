#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, r, c; cin >> n >> m >> r >> c;

        bool row = false, col = false, blackFound = false, found = false;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                char ch; cin >> ch;
                if(ch == 'B') {
                    if(i == r) row = 1;
                    if(j == c) col = 1;
                    if(i == r && j == c) found = 1;
                    blackFound = 1;
                }
            }
        }
        if(blackFound) {
            if(found) cout << "0\n";
            else if(row || col) cout << "1\n";
            else cout << "2\n";
        } else cout << "-1\n";
    }
}