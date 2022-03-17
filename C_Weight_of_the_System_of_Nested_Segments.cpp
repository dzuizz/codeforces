#include <algorithm>
#include <iostream>
using namespace std;

#define fi first
#define se second

typedef long long ll;
typedef pair<int, int> ii;

int t, m, n;

int main() {
    cin >> t;
    while(t--) {
        cin >> n >> m;

        ii pos[2*n]; // coor, pos
        int sum = 0;
        pair<ii, int> arr[m]; // weight, pos, coor

        for(int i = 0; i < m; i++) {
            cin >> arr[i].se >> arr[i].fi.fi;
            arr[i].fi.se = i + 1;
        }
        sort(arr, arr + m);
        for(int i = 0; i < 2*n; i++) {
            pos[i] = ii(arr[i].se, arr[i].fi.se);
            sum += arr[i].fi.fi;
        }
        sort(pos, pos + 2*n);
        cout << sum << endl;
        for(int i = 0; i < n; i++) {
            cout << pos[i].se << " " << pos[2 * n - i - 1].se << endl;
        }
        cout << '\n';
    }
}