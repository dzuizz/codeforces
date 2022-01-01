#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, k, time=5, ans=0;
    cin >> n >> k;
    k = 240-k;
    while(k>=time && ans<n){
        k -= time;
        ans++;
        time += 5;
    }
    cout << ans << endl;
}