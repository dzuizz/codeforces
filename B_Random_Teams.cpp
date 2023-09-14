#include<iostream>
using namespace std;

#define int long long

signed main() {
    int n, m; cin >> n >> m;

    int min = (n%m)*(n/m+1)*(n/m)/2 + (m-n%m)*(n/m)*(n/m-1)/2;
    int max = (n-m+1)*(n-m)/2;

    cout << min << ' ' << max << '\n';
}