#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        if( (a+b+c+n)%3==0 && (a+b+c+n)/3>=max(max(a, b), c) ) cout << "YES\n";
        else cout << "NO\n";
    }
}