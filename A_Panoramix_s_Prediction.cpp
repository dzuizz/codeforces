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
    int a, b; cin >> a >> b;
    int posA, posB;
    
    int isPrime[b + 2];

    bool flag = 0;
    memset(isPrime, 1, sizeof(isPrime));
    isPrime[0] = 0;
    isPrime[1] = 0;
    for (int i = 2; i <= b; i++) {
        if (isPrime[i]) {
            if (i > a && i < b) {
                cout << "NO\n";
                return 0;
            }
            if (i == b) flag = 1;
            for (int j = i * i; j <= b; j += i) isPrime[j] = 0;
        }
    }

    if (flag) cout << "YES\n";
    else cout << "NO\n";
}