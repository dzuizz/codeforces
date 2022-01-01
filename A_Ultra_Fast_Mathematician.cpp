#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    string s1, s2, ans="";
    cin >> s1 >> s2;
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]) ans+= "0";
        else ans += "1";
    }
    cout << ans << endl;
}