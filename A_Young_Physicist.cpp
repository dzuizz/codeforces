#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, a=0, b=0, c=0, d, e, f;
    cin >> n;
    while(n--){
        cin >> d >> e >> f;
        a += d;
        b += e;
        c += f;
    }
    if(a==0 && b==0 && c==0) cout << "YES";
    else cout << "NO";
}