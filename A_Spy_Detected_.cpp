#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string same;
        cin >> n;
        string arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        if(arr[0]!=arr[1]){
            if(arr[0]!=arr[2]){
                cout << "1\n";
            }else{
                cout << "2\n";
            }
        }else{
            same = arr[0];
            for(int i=2;i<n;i++){
                if(arr[i]!=same){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
}