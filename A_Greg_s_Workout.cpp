#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, e;
    cin >> n;
    int arr[3]= {0, 0, 0};
    for(int i=0;i<n;i++){
        cin >> e;
        arr[i%3] += e;
    }
    int m = max(max(arr[0], arr[1]), arr[2]);
    if(arr[0]==m) cout << "chest";
    else if(arr[1]==m) cout << "biceps";
    else cout << "back";
}