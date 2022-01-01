#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int ans=w*(w+1)/2*k;
    if(ans>n) cout << ans-n;
    else cout << 0;
}