#include <iostream>
#include <set>
#include <ctype.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> ans;
    for(int i=0;i<n;i++){
        ans.insert(tolower(s[i]));
    }
    if(ans.size()==26) cout << "YES\n";
    else cout << "NO\n";
}