#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, b, k;
        cin >> a >> b >> k;
        cout << k/2*(a-b)+k%2*a << endl;
    }
}