#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<int> segTree, v, freq;

void update(int idx, int l, int r, int x, int y) {
    if (x <= l && r <= y) {
        segTree[idx] += 1;
        return;
    }
    if (r < x || y < l) return;

    int mid = (l + r) / 2;
    update(idx * 2, l, mid, x, y);
    update(idx * 2 + 1, mid + 1, r, x, y);
}

void query(int idx, int l, int r, int inc) {
    if (l == r) {
        freq.push_back(segTree[idx] + inc);
        return;
    }

    int mid = (l + r) / 2;
    query(idx * 2, l, mid, inc + segTree[idx]);
    query(idx * 2 + 1, mid + 1, r, inc + segTree[idx]);
}

int main() {
    int n, q; cin >> n >> q;
    segTree = vector<int>(4 * n, 0);
    v = vector<int>(n);

    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        update(1, 0, n - 1, l - 1, r - 1);
    }

    query(1, 0, n - 1, 0);
    sort(freq.begin(), freq.end());

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (ll) v[i] * freq[i];
    }

    cout << ans << '\n';
}