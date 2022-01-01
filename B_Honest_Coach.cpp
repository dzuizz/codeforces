#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int t, n;

int main(){
    cin >> t;
    while(t--){
        int small=1e3+1;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for(int i=1;i<n;i++){
            int diff = arr[i]-arr[i-1];
            if(diff<small){
                small = diff;
            }
        }
        cout << small << endl;
    }
}