#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m, a;
    cin >> n >> m >> a;
    cout << ll(ceil(1.0*n/a)*ceil(1.0*m/a)) << endl;
}