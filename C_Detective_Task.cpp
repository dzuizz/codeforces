#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int last1 = 0, first0 = s.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') last1 = i;
            if (s[i] == '0') {
                first0 = i;
                break;
            }
        }
        cout << first0 - last1 + 1 << endl;
    }
}