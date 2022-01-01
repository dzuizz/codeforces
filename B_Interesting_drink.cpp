#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

const int N = 1e5;
int n, q, m;

int main(){
    cin >> n;
    int shop[n];
    for(int i=0;i<n;i++){
        cin >> shop[i];
    }
    sort(shop, shop+n);
    cin >> q;
    for(int ii=0;ii<q;ii++){
        cin >> m;
        cout << upper_bound(shop, shop+n, m) - shop << endl;
    }
}