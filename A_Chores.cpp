#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int n, a, b;

int main(){
    cin >> n >> a >> b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << arr[b]-arr[b-1];
}