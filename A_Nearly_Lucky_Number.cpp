#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int check(string s){
    int ans=0;
    for(int i=0;i<s.length();i++) if(s[i]=='4' || s[i]=='7') ans++;
    return ans;
}

int main(){
    string s1;
    cin >> s1;
    if(int(check(to_string(check(s1))))>0) cout << "YES\n";
    else cout << "NO\n";
}