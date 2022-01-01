#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n, ans=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());
    int big = arr[0];
    for(int i=1;i<n;i++){
        ans += big-arr[i];
    }
    cout << ans;
}