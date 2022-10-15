#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back
#define fi first
#define se second

int main() {
    string s; cin >> s;
    
    if (s[0] != '-') cout << s << '\n';
    else if (s[sz(s) - 1] > s[sz(s) - 2]) {
        s.pop_back();
        cout << s << '\n';
    } else {
        char ch = s[sz(s) - 1];
        s.pop_back();
        s.pop_back();
        s += ch;
        cout << stoi(s) << '\n';
    }
}
