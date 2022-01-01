#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, k, ans=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int min = arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=min && arr[i]>0) ans++;
    }
    cout << ans << endl;
}