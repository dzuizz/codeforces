#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll s, a, b, c;
        cin >> s >> a >> b >> c;
        cout << s/c+s/c/a*b << endl;
    }
}