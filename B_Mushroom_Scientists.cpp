#include <iostream>
#include <iomanip>
using namespace std;
typedef long long ll;

ll S, abc, a, b, c;

int main(){
    cin >> S >> a >> b >> c;
    abc = a+b+c;
    if(abc) cout << setprecision(10) << fixed << 1.0*a*S/abc << " " << 1.0*b*S/abc << " " << 1.0*c*S/abc;
    else cout << "0.0 0.0 0.0";
}