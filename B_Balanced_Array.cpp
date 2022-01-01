#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if(n%4==2) cout << "NO\n";
        else{
            cout << "YES\n";
            for(int i=1;i<=n/2;i++){
                cout << 2*i << " ";
            }
            for(int i=1;i<n/2;i++){
                cout << 2*i-1 << " ";
            }
            cout << 3*n/2-1 << endl;
        }
    }
    
}