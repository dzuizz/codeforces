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
    int a[n];
    map<int, int> m;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    sort(a, a + n);

    cout << max(0, n - m[a[0]] - m[a[n - 1]]) << '\n';
}