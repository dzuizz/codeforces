#include <iostream>
using namespace std;
typedef long long ll;

string s;

int main() {
    cin >> s;
    int n = s.size();
    int ind = 1;
    bool caps = true;
    while(ind < n) {
        if(s[ind] >= 97) {
            caps = false;
            break;
        }
        ind++;
    }
    if(caps) {
        if(s[0] >= 97) {
            cout << char(s[0] - 32);
        } else {
            cout << char(s[0] + 32);
        }
        for(int i = 1; i < n; i++) {
            cout << char(s[i] + 32);
        }
    }
    else cout << s;
}