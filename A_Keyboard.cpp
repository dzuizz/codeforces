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
    string kd[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};

    string d; cin >> d;
    string s; cin >> s;

    for (int i = 0; i < sz(s); i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < sz(kd[j]); k++) {
                if (s[i] == kd[j][k]) {
                    if (d[0] == 'R') {
                        s[i] = kd[j][k - 1];
                        break;
                    } else {
                        s[i] = kd[j][k + 1];
                        break;
                    }
                }
            }
        }
    }

    cout << s << '\n';
}