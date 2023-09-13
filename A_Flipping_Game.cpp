#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int run=0, res=INT32_MIN, sum=0;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        sum += x;

        run += (x ? -1 : 1);

        res = max(res, run);
        if (run < 0) run = 0;
    }

    cout << sum+res << '\n';
}