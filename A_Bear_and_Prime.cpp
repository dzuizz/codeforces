#include <iostream>
using namespace std;
typedef long long ll;

int primes[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int ind, cnt;
string s;

int main() {
    while(ind++ < 15 && cnt < 2) {
        int cur = primes[ind-1];
        cout << cur << endl;
        Loop:
        cin >> s;
            if(cnt < 2 && s == "yes") {
                cnt++;
                cur *= primes[ind-1];
                if(cur > 100) continue;
                cout << cur << endl;
                goto Loop;
            }
    }
    if(cnt == 2) cout << "composite\n";
    else cout << "prime\n";
}