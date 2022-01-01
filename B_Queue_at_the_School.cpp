#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, t;
    string s, ans="";
    cin >> n >> t >> s;
    for(int l=0;l<t;l++){
        for(int j=n-1;j>0;j--){
            if(s[j]=='G' && s[j-1]=='B'){
                s[j]='B';
                s[j-1]='G';
                j--;
            }
        }
    }
    cout << s << endl;
}