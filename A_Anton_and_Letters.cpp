#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main() {
    string s;
    getline(cin, s);

    set<int> st;

    if (s.size() == 2) {
        cout << 0 << '\n';
        return 0;
    }
    for (int i = 1; i < s.size(); i += 3) {
        st.insert(s[i]);
    }

    cout << st.size() << '\n';
}