#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int t, n, x;

int main(){
    cin >> t;
    while (t--){
        bool sorted=true;
        cin >> n >> x;
        int arr[n], arr2[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            arr2[i] = arr[i];
        }
        sort(arr2, arr2+n);
        for(int i=0;i<n;i++){
            if(arr[i]!=arr2[i]){
                sorted = false;
                break;
            }
        }
        if(!sorted && x==n){
            cout << "NO\n";
            continue;
        }
        if(x<=n/2){
            cout << "YES\n";
            continue;
        }
        string ans="YES";
        for(int i=n-x;i<x;i++){
            if(arr[i]!=arr2[i]){
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
}