#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k*l/nl, c*d), p/np)/n;
}