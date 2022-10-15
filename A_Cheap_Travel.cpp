#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back
#define fi first
#define se second

int main() {
    int n, m, a, b; cin >> n >> m >> a >> b;
    int ans = n * a;

    ans = min(ans, (n / m) * b + (n % m) * a);
    ans = min(ans, (n / m + 1) * b);

    cout << ans << '\n';
}
