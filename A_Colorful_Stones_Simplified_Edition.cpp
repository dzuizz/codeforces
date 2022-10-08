#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    string s, t; cin >> s >> t;

    int cur = 0;
    for (int i = 0; i < t.size(); i++) {
        if (s[cur] == t[i]) cur++;
    }

    cout << cur + 1 << '\n';
}