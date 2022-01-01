#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    for(ll c=0;c<t;c++){
        ll length, coor=-1;
        string s;
        cin >> length;
        cin >> s;
        for(ll i=0;i<length;i++){
            if((s[i]=='a' && s[i+1]=='b') || (s[i]=='b' && s[i+1]=='a')){
                coor = i;
                break;
            }
        }
        if(coor==-1) cout << "-1 -1\n";
        else cout << coor+1 << " " << coor+2 << endl;
    }
}