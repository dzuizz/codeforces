#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int t, n, h;

int main(){
    cin >> t;
    while(t--){
        bool c=true;
        int dmg=0, ans=0;
        cin >> n >> h;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr, arr+n, greater<int>());
        int a = arr[0]+arr[1];
        if(arr[0]>=h) cout << "1\n";
        else if(h%a>0){
            if(arr[0]>=h%a) cout << h/a*2+1 << endl;
            else cout << h/a*2+2 << endl;
        }
        else cout << h/a*2 << endl;
    }
}