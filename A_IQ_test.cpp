#include <iostream>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back
#define fi first
#define se second

int main() {
    int graph[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            char ch; cin >> ch;
            if (ch == '#') graph[i][j] = 1;
            else graph[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int cur = graph[i][j] + graph[i][j + 1] + graph[i + 1][j] + graph[i + 1][j + 1];
            if (cur != 2) {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
}
