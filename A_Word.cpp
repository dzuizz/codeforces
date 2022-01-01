#include <iostream>
#include <ctype.h>
using namespace std;
typedef long long ll;

int main(){
    int upper=0, lower=0;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(int(s[i])>96) lower++;
        else upper++;
    }
    if(lower>=upper){
        for(int i=0;i<s.length();i++) cout << char(tolower(s[i]));
    }
    else{
        for(int i=0;i<s.length();i++) cout << char(toupper(s[i]));
    }
}