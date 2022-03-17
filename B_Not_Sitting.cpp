#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int n, m;

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> m;

        vector<int> a;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                a.push_back(max(max(i + j, n - 1 - i + j), max(m - 1 - j + i, m - 1 - j + n - 1 - i)));
            }
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < n * m; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

// 1, 4, 8, 12