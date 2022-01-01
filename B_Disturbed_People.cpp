#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, ans=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1){
            arr[i+1] = 0;
            ans++;
        }
    }
    cout << ans;
}