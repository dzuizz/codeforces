#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

string drawZeros(int n){
    string res="";
    for(int i=0;i<n;i++){
        res += "0";
    }
    return res;
}

int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int ans=0;
        for(int i=0;i<s.length();i++) ans++;
        cout << ans << endl;
        reverse(s.begin(), s.end());
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                cout << s[i] << drawZeros(i) << " ";
            }
        }
        cout << endl;
    }
}