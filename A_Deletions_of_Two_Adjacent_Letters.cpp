#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        string s;
        char ch;
        bool flag = 0;
        cin >> s >> ch;
        for(int i = 0; i < s.size(); i += 2) {
            if(s[i] == ch) {
                flag = 1;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}