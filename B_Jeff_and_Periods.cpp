#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    map<int, vector<int> > mp;

    for (int i = 0; i < n; ++i) {
        int e; cin >> e;
        mp[e].push_back(i);
    }

    vector<pair<int, int> > ans;
    for (auto &p : mp) {
        bool flag = 1;
        for (int i = 2; i < p.second.size(); ++i) {
            if (p.second[i] - p.second[i - 1] != p.second[i - 1] - p.second[i - 2]) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            ans.push_back(make_pair(p.first, (p.second.size() == 1 ? 0 : p.second[1] - p.second[0])));
        }
    }

    cout << ans.size() << '\n';
    for (auto &e : ans) {
        cout << e.first << " " << e.second << '\n';
    }
}
