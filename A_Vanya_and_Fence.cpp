#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, h, a, ans=0;
    cin >> n >> h;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a>h) ans += 2;
        else ans++;
    }
    cout << ans << endl;
}