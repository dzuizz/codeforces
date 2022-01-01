#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    string s;
    for(int z=0;z<t;z++){
        ll zeros=0;
        cin >> s;
        if(s[0]=='0') zeros = 1;
        for(ll i=0;i<s.length()-1;i++){
            if(s[i]=='1' && s[i+1]=='0') zeros++;
        }
        if(zeros>1) cout << 2 << endl;
        else if(zeros==1) cout << 1 << endl;
        else cout << 0 << endl;
    }
}