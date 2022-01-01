#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, ans="";
        cin >> s;
        for(int i=0;i<s.length();i+=4){
            ans += s[i];
            ans += s[i+1];
        }
        if(s.length()%4==0){
            ans += s[s.length()-1];
        }
        cout << ans << endl;
    }
}