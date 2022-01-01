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
    int big = arr[0], small = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>big){
            big = arr[i];
            ans++;
        }else if(arr[i]<small){
            small = arr[i];
            ans++;
        }
    }
    cout << ans << endl;
}