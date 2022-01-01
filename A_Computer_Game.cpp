#include <iostream>
using namespace std;
typedef long long ll;

int t, n;

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        bool ans = true;
        char a[n], b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]=='1' && b[i]=='1'){
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}