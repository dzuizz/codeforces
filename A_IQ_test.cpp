#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int n, e;

int main() {
    cin >> n;
    vector< pair<int, int> > even;
    vector< pair<int, int> > odd;
              //num, index
    for (int i = 1; i <= n; i++) {
        cin >> e;
        if (e % 2 == 0) {
            even.push_back(make_pair(e, i));
        } else {
            odd.push_back(make_pair(e, i));
        }
    }
    if(even.size() == 1) cout << even[0].second << endl;
    else cout << odd[0].second << endl;
}