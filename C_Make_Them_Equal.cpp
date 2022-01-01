#include <iostream>
using namespace std;
typedef long long ll;

string s;
ll t, n;
char ch;

int main(){
    cin >> t;
    while(t--){
        int ans=0;
        cin >> n >> ch >> s;
        bool left = false, right = true;
        if(s[n-1] == ch) right = false;
        for(int i=0;i<n-1;i++){
            if(s[i]!=ch){
                left = true;
                break;
            }
        }
        if(left && right) cout << "2\n" << n << " " << n-1 << endl;
        else if(left) cout << "1\n" << n << endl;
        else if(right) cout << "1\n" << n-1 << endl;
        else cout << "0\n";
    }
}