#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    for(ll c=0;c<t;c++){
        ll n, s;
        cin >> n >> s;
        cout << s/(n/2+1) << endl;
    }
}