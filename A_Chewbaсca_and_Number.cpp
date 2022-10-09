#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second

int main() {
    string s; cin >> s;

    for (int i = 0; i < sz(s); i++) {
        if (i == 0 && s[i] == '9') continue;
        if (s[i] > '4') s[i] = '9' - s[i] + '0';
    }
    
    cout << s << '\n';
}