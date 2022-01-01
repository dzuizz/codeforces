#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    for(ll c=0;c<t;c++){
        ll n, ans=0, i=0;
        string s1, s2;
        cin >> n >> s1 >> s2;
        while(i<n){
            if(s1[i]=='1'){
                if(s2[i]=='0') ans += 2;
                else if(i<n-1 && s1[i+1]=='0' && s2[i+1]=='0'){
                    ans += 2;
                    i++;
                }
            }else{
                if(s2[i]=='1') ans += 2;
                else if(i<n-1 && s1[i+1]=='1' && s2[i+1]=='1'){
                    ans += 2;
                    i++;
                }else ans++;
            }
            i++;
        }
        cout << ans << endl;
    }
}