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
    int n; cin >> n;

    map<string, int> m;
    string a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }

    int mxVal = m[a[0]];
    string mxAns = a[0];

    for (int i = 1; i < n; i++) {
        if (m[a[i]] > mxVal) {
            mxVal = m[a[i]];
            mxAns = a[i];
        }
    }

    cout << mxAns << '\n';
}