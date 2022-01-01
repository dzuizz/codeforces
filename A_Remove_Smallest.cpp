#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
    string ans = "YES";
    sort(arr, arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]-1>arr[i-1]) ans = "NO";
    }
    cout << ans << endl;
    }
}