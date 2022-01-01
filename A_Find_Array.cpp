#include <iostream>
using namespace std;
typedef long long ll;

bool notPrime[8000];
int sieve[1000];

int main() {
    notPrime[0] = notPrime[1] = true;
    for(int i = 2; i < 8000; i++) {
        if(!notPrime[i]) {
            for(int j = i * i; j < 8000; j += i) {
                notPrime[j] = true;
            }
        }
    }

    int ind = 0;
    for(int i = 2; i < 8000; i++) {
        if(!notPrime[i]) {
            sieve[ind] = i;
            ind++;
        }
    }

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i = 0; i < n; i++) {
            cout << sieve[i] << " ";
        }
        cout << '\n';
    }
}