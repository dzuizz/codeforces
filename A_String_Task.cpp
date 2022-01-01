#include <iostream>
using namespace std;
typedef long long ll;

string s;

int main() {
    cin >> s;
    string ans = "";
    for(int i=0;i<s.size();i++) {
        if( int(s[i]) <= 90 ) {
            s[i] = char(int(s[i]) + 32);
        }
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y') {
            ans += ".";
            ans += s[i];
        }
    }
    cout << ans << endl;
}