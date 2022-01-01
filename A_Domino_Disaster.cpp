#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        if(s[0]=='D') cout << "U";
        else if(s[0]=='U') cout << "D";
        for(int i=1;i<n;i++){
            if(s[i]=='R' && s[i-1]=='L'){
                cout << "LR";
            }else if(s[i]=='D'){
                cout << "U";
            }else if(s[i]=='U'){
                cout << "D";
            }
        }
        cout << endl;
    }
}