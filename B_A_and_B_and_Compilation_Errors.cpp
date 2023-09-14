#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; cin >> n;

    int a[n], b[n], c[n];
    vector<int> v[3];

    for (int i=0; i<3; i++) {
        for (int j=0; j<n-i; j++) {
            int x; cin >> x;
            v[i].push_back(x);
        }
    }

    sort(v[0].begin(), v[0].end());
    for (int i=0; i<2; i++) {
        sort(v[i+1].begin(), v[i+1].end());

        bool done = 0;
        for (int j=0; j<v[i+1].size(); j++) {
            if (v[i][j] != v[i+1][j]) {
                cout << v[i][j] << '\n';
                done = 1;
                break;
            }
        }

        if (done) continue;
        cout << v[i][v[i].size()-1] << '\n';
    }
}