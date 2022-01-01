#include <iostream>
using namespace std;
typedef long long ll;

string s;

int main() {
    cin >> s;
    int n = s.size();
    string ans = "";
    bool space = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2;
            if(space) {
                ans += ' ';
                space = false;
            }
        }else{
            space = true;
            ans += s[i];
        }
    }
    cout << ans << endl;
}