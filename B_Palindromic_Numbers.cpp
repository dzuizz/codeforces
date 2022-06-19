#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        if (s[0] == '9') {
            reverse(s.begin(), s.end());
            int carry = 0;
            string ans = "";
            for (char ch : s) {
                int dig = ch - '0' + carry;
                ans += ((11 - dig) % 10 + '0');
                carry = 1;
                if (dig <= 1) carry = 0;
            }
            reverse(ans.begin(), ans.end());
            cout << ans;
        } else {
            for (char dig : s) {
                cout << 9 - (dig - '0');
            }
        }
        cout << "\n";
    }
}

//  909
//   02
// 1111