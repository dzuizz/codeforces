#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n, e, ans=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0;i<n;i+=2){
        ans += arr[i+1]-arr[i];
    }
    cout << ans;
}