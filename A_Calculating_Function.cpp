#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    if(n%2==0) cout << n/2 << endl;
    else cout << -1*(n+1)/2 << endl;
}