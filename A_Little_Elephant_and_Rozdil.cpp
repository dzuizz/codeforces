#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x].push_back(i + 1);
    }

    int ans = mp.begin()->first;
    if (mp[ans].size() > 1) cout << "Still Rozdil\n";
    else cout << mp[ans][0] << '\n';
}