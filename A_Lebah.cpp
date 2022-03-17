#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
 
ll male = 1, female = 0, total = 0;
const ll INF = 1e18;
map<ll, bool> m;
 
int main() {
    int t; cin >> t;
    m[0ll] = 0;
    while(t--) {
        ll n; cin >> n;
        while(total < n) {
            total += male + 2*female;
            female += male;
            male = female - male;
            m[total] = 1;
        }
        cout << (m[n] ? "yes" : "no") << endl;
    }
}