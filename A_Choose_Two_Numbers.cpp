#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> m;
    int b[m];
    for(int i=0;i<m;i++) cin >> b[i];
    sort(a, a+n, greater<int>());
    sort(b, b+m, greater<int>());
    cout << a[0] << " " << b[0];
}