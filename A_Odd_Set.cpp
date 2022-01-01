#include <iostream>
using namespace std;
typedef long long ll;

int t, e, n;

int main(){
    cin >> t;
    while (t--){
        cin >> n;
        int even=0, odd=0;
        for(int i=0;i<2*n;i++){
            cin >> e;
            if(e%2==0) even++;
            else odd++;
        }
        if(odd==even) cout << "Yes\n";
        else cout << "No\n";
    }
    
}