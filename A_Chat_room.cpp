#include <iostream>
using namespace std;
typedef long long ll;

string s;
string ans = "";
bool h, e, l1, l2, o;

int main() {
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if(s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o') {
            ans += s[i];
        }
    }
    for(int i = 0 ; i < ans.size() ; i++) {
        if(!h) {
            if(ans[i] == 'h') {
                h = true;
            }
        }else if(!e) {
            if(ans[i] == 'e') {
                e = true;
            }
        }else if(!l1) {
            if(ans[i] == 'l') {
                l1 = true;
            }
        }else if(!l2) {
            if(ans[i] == 'l') {
                l2 = true;
            }
        }else if(!o) {
            if(ans[i] == 'o') {
                o = true;
            }
        }
    }
    if(h && e && l1 && l2 && o) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}