#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    string s, s1="", s2;
    cin >> s >> s2;
    for(int i=s.length()-1;i>=0;i--)
        s1 += s[i];
    if(s1==s2) cout << "YES\n";
    else cout << "NO\n";
}