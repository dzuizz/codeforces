#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int n;

int main(){
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr, arr+n);
    cout << arr[(n-1)/2];
}