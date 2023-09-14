#include<iostream>
#include<map>
using namespace std;

int main() {
    string s; cin >> s;

    map<int, bool> ab, ba;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'A' && s[i+1] == 'B') ab[i]=1;
        if (s[i] == 'B' && s[i+1] == 'A') ba[i]=1;
    }

    if (ab.size() && ba.size())
        cout << (abs(ab.begin()->first-ba.rbegin()->first)>1 || abs(ab.rbegin()->first-ba.begin()->first)>1 ? "YES" : "NO") << '\n';
    else
        cout << "NO\n";
}