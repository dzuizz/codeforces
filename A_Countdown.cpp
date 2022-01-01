#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, ans=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n-1;i++){
            if(s[i]!='0') ans += int(s[i])-47;
        }
        if(s[n-1]!='0') ans += int(s[n-1])-48;
        cout << ans << endl;
    }
}