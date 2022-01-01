#include <algorithm>
#include <iostream>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
    int s, n; cin >> s >> n;
    ii arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr+n);
    int ind = 0;
    while(s > arr[ind].first && ind < n) {
        s += arr[ind++].second;
    }
    if(ind == n) cout << "YES\n";
    else cout << "NO\n";
}