#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int n, m;

int main() {
    cin >> n >> m;
    int arr[m];
    for(int i = 0;i < m;i++) {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int ans = 1e5;
    for(int i=0;i<m-n+1;i++) {
        ans = min(ans, arr[n+i-1] - arr[i]);
    }
    cout << ans << endl;
}