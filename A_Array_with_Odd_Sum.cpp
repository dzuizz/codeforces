#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, sum=0, e;
        bool even=false, odd=false;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> e;
            if(e%2==0) even=true;
            else odd=true;
            sum += e;
        }
        if(sum%2==1 || (odd && even)) cout << "YES\n";
        else cout << "NO\n";
    }
}