#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll n, k;

int main(){
    cin >> n >> k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    if((k==0 && arr[0]==1) || arr[k-1]==arr[k]) cout << "-1";
    else if(k==0) cout << "1";
    else cout << arr[k-1];
}