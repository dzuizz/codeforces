#include<iostream>
#include<vector>
using namespace std;

int ind = 1, pre, cur = 1, ans, n;

int main() {
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    pre = a[0];
    
    while (ind < n) {
        if (a[ind] < pre) {
            ans = max(ans, cur);
            pre = a[ind];
            cur = 1;
            ind++;
            continue;
        }
        pre = a[ind];
        cur++, ind++;
    }
    cout << max(cur, ans);
}