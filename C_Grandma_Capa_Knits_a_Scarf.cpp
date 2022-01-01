#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

ll t, n, l, r, ans = -1;
string s, alpha = "abcdefghijklmnopqrstuvwxyz";

int main(){
    cin >> t;
    while(t--){
        cin >> n >> s;
        ans = -1;
        for(char ch : alpha){
            bool correct = true;
            ll res = 0, l = 0, r = n-1;
            while(r >= l){
                if(s[l] != s[r]){
                    if(s[l] == ch){
                        l++;
                    }else if(s[r] == ch){
                        r--;
                    }else{
                        correct = false;
                        break;
                    }
                    res++;
                }
                else l++, r--;
            }
            if(correct){
                if(ans == -1) ans = res;
                else ans = min(ans, res);
            }
        }
        cout << ans << endl;
    }
}