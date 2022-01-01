#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, sum=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum!=0){
            
        }else cout << "NO\n";
    }
}