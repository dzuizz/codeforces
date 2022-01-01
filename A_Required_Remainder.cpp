#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, n, i=0;
        cin >> a >> b >> n;
        while(((n-i)/a)*a+b>n) i++;
        cout << ((n-i)/a)*a+b << endl;
    }
}