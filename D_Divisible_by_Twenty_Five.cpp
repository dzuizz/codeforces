#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

string s;
int numCount = 0, dashCount = 0, XCount = 0, leng, ans = 0;

int power(int a, int b){
    int res=1;
    for(int i=0;i<b;i++) res *= a;
    return res;
}

int main(){
    cin >> s;
    leng = s.length();
    for(int i=0;i<leng;i++){
        if(s[i]=='_') dashCount++;
        else if(s[i]=='X') XCount++;
        else numCount++;
    }
    if(leng<2) ans = 1;
    else{
        string end = s.substr(leng-2, 2); // 00, 25, 50, 75
        if(end == "XX" || end == "X0" || end == "0X"){ // 00
            if(s[0]=='X' && numCount==0) ans = 1; // 0__00
            else if(s[0]=='X' && numCount>0) ans = 0; // 01200
            else if(s[0]=='_') ans = 9*power(10, dashCount-1);
            else ans = power(10, dashCount);
        }else if(end == "__"){
            PASS_MAX;
        }
    }
    cout << ans;
}