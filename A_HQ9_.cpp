#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    string s, ans="NO";
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            ans = "YES";
            break;
        }
    }
    cout << ans;
}