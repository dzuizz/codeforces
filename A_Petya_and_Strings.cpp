#include <iostream>
#include <ctype.h>
using namespace std;
typedef long long ll;

int main(){
    int ans=0;
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=0;i<s1.length();i++){
        if(int(tolower(s1[i]))>int(tolower(s2[i]))){
            ans = 1;
            break;
        }
        if(int(tolower(s1[i]))<int(tolower(s2[i]))){
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
}