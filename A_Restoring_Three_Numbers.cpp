#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int arr[4];
    for(int i=0;i<4;i++) cin >> arr[i];
    sort(arr, arr+4, greater<int>());
    cout << arr[0]-arr[1] << " " << arr[0] - arr[2] << " " << arr[0] - arr[3] << endl;
}