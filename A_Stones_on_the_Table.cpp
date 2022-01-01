#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, ans=0;
    char prev='H', cur;
    cin >> n;
    while(n--){
        cin >> cur;
        if(cur==prev) ans++;
        else prev = cur;
    }
    cout << ans << endl;
}