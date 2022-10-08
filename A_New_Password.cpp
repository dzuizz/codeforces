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
    int n, k; cin >> n >> k;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    int ind = 0;
    for (int i = 0; i < n; i++) {
        cout << alphabet[ind];
        ind++;
        if (ind == k) ind = 0;
    }
}