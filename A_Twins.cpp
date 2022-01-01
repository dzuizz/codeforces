#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int n, sum = 0, brother = 0;

int main() {
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        brother += arr[i];
    }
    sort(arr, arr+n, greater<int>());
    int ind = 0, ans = 0;
    while(sum <= brother) {
        sum += arr[ind];
        brother -= arr[ind];
        ans++, ind++;
    }
    cout << ans << endl;
}