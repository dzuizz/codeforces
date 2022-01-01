#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

bool checkIfNot(string s){
    int sum=0;
    for(int i=0;i<s.length();i++){
        sum += int(s[i]-48);
    }
    if(sum%4==0) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    while(checkIfNot(to_string(n))){
        n++;
    }
    cout << n;
}