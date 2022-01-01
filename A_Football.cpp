#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    string s, ans="NO";
    cin >> s;
    char cur='2';
    int n=0, x=s.length(), i=0;
    while(n<7 && i<x){
        if(s[i]!=cur){
            cur = s[i];
            n = 0;
        }
        i++;
        n++;
    }
    if(n==7) ans = "YES";
    cout << ans;
}