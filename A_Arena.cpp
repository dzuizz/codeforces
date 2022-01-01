#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int t, n;

int main(){
    cin >> t;
    while(t--){
        int smalls=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int small=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]==small) smalls++;
            else break;
        }
        cout << n-smalls << endl;
    }
}