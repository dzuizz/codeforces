#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    int arr[n];
    for(int i =0 ;i< n;i++) cin >> arr[i];
    sort(arr, arr+n);
    int ind = 0;
    int ans = 0;
    while(arr[ind] < 0 && ind < m) {
        ans -= arr[ind];
        ind++;
    }
    cout << ans << endl;
}