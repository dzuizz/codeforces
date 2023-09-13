#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n], ans[n];

    for (int i=0; i<n; i++) cin >> a[i];

    unordered_map<int, int> mp;
    for (int i=n-1; i>=0; i--) {
        mp[a[i]]++;
        ans[i] = mp.size();
    }

    while (m--) {
        int l; cin >> l;
        cout << ans[l-1] << '\n';
    }
}