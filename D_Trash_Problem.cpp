#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<int> pos;
multiset<int> gap;

void insert(int x) {
    if(pos.empty()) {
        pos.insert(x);
        return;
    }
    
    auto it = pos.lower_bound(x);
    if (it == pos.begin()) {
        gap.insert(*pos.begin() - x);
    } else if ( it == pos.end() ) {
        auto itr = pos.end();
        itr--;
        gap.insert(x - *itr);
    } else {
        int diff = *it - *(--it);
        auto itr = gap.find(diff);
        gap.erase(itr);
        gap.insert(x - *it);
        it++;
        gap.insert(*it - x);
    }
    pos.insert(x);
}

void remove(int x) {
    int lf = -1, rg = -1;
    auto it = pos.find(x);
    if (it != pos.begin()) lf = *(--it);
    it = pos.upper_bound(x);
    if (it != pos.end()) rg = *it;
    if (lf != -1 && rg != -1) gap.insert(rg-lf);
    if (lf != -1) gap.erase(gap.find(x-lf));
    if (rg != -1) gap.erase(gap.find(rg-x));
    pos.erase(x);
}

void query() {
    if (gap.empty()) {
        cout << "0\n";
        return;
    }
    cout << *(--pos.end()) - *pos.begin() - *(--gap.end()) << '\n';
}

int main() {
    int n, q; cin >> n >> q;
    
    int a[n];
    
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);
    for(int i = 0; i < n; i++) pos.insert(a[i]);
    for(int i = 1; i < n; i++) gap.insert(a[i] - a[i - 1]);
    
    
    query();
    for(int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        if (a == 0) remove(b);
        else insert(b);
        query();
    }
    return 0;
}