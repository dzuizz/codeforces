#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;

int n, t, k, inp, cnt;

int main() {
    cin >> n >> t;
    while(t--) {
        cin >> k;

        int lf = 1, rg = n;
        cnt = 0;

        while(lf < rg) {
            int mid = (lf + rg) / 2;
            printf("? %d %d\n", lf, mid);
            cin >> inp;
            if( (mid - lf + 1) - inp + cnt < k ) {
                cnt += (mid - lf + 1) - inp;
                lf = mid + 1;
            } else rg = mid;
        }
        printf("! %d\n", lf);
    }
}