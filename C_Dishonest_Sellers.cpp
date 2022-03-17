#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define fi first
#define se second

typedef long long ll;
typedef pair<int, int> ii;

vector<ii> v;
vector<int> v2;
int ans = 0;

bool cmp(ii a, ii b) {
    return a.fi - a.se < b.fi - b.se;
}

int main() {
    int n, k; cin >> n >> k;

    v.resize(n);
    v2.resize(n-k);
    
    for(int i = 0; i < n; i++) {
        int e; cin >> e;
        v[i].fi = e;
    }
    for(int i = 0; i < n; i++) {
        int e; cin >> e;
        v[i].se = e;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < k; i++) ans += v[i].fi;
    for(int i = k; i < n; i++) v2[i-k] = min(v[i].fi, v[i].se);
    for(int i = 0; i < n-k; i++) ans += v2[i];

    cout << ans << endl;
}