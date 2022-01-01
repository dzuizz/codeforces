#include <iostream>
using namespace std;
typedef long long ll;

ll t, n;

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        if(n>0) cout << 0 - (n-1) << " " << n << endl;
        else if(n==0) cout << "-1 1\n";
    }
}