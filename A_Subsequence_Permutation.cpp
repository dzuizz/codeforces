#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int t, n, ans;
string s, s2;

int main(){
    cin >> t;
    while(t--){
        ans = 0;
        cin >> n >> s;
        s2 = s;
        sort(s2.begin(), s2.end());
        for(int i=0;i<n;i++){
            if(s[i]!=s2[i]) ans++;
        }
        cout << ans << endl;
    }
}