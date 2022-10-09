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
    string lf = "", rg = "", s; cin >> s;
    bool flag = 1;

    for (int i = 0; i < sz(s); i++) {
        if (s[i] == '|') {
            flag = 0;
            continue;
        }

        if (flag) lf += s[i];
        else rg += s[i];
    }

    string x; cin >> x;
    for (int i = 0; i < sz(x); i++) {
        if (sz(lf) > sz(rg)) rg += x[i];
        else lf += x[i];
    }

    if (sz(lf) == sz(rg)) cout << lf << "|" << rg << '\n';
    else cout << "Impossible\n";
}