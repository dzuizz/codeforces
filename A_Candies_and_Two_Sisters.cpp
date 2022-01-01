#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n%2==0) cout << n/2-1 <<endl;
        else cout << (n-1)/2 << endl;
    }
}