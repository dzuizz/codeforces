#include<iostream>
#include<map>
using namespace std;

#define int long long

signed main() {
    int n; cin >> n;

    map<int, int> mp;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    auto it1 = mp.begin();
    auto it2 = mp.rbegin();

    cout << it2->first-it1->first << ' ' << (it1->first-it2->first ? (it1->second)*(it2->second) : (it1->second)*(it1->second-1)/2) << '\n';
}