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
    string a, b; cin >> a >> b;
    if (a == b) {
        cout << "-1\n";
    } else {
        cout << max(sz(a), sz(b)) << '\n';
    }
}