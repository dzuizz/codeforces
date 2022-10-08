#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second

int main() {
    int n; cin >> n;
    char graph[n][n];
    
    char ch = ' ';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];

            if (i == j || i + j == n - 1) {
                if (graph[i][j] != graph[0][0]) {
                    cout << "NO\n";
                    return 0;
                }
            } else if (ch == ' ' && graph[i][j] != graph[0][0]) {
                ch = graph[i][j];
            } else if (ch != graph[i][j]) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}