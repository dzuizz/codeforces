#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, a, b, ans=0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(b-a>=2) ans++;
    }
    cout << ans << endl;
}