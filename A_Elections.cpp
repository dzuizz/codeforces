#include <iostream>
using namespace std;
typedef long long ll;

int t, a, b, c;

int main(){
    
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int cc = max(a, b)-c+1, aa = max(b, c)-a+1, bb = max(c, a)-b+1;
        if(aa>0) cout << aa << " ";
        else cout << 0 << " ";
        if(bb>0) cout << bb << " ";
        else cout << 0 << " ";
        if(cc>0) cout << cc << "\n";
        else cout << 0 << "\n";
    }
}