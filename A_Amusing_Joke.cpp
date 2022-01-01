#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    string a, b, ab;
    cin >> a >> b >> ab;
    a += b;
    sort(a.begin(), a.end());
    sort(ab.begin(), ab.end());
    if(a==ab) cout << "YES\n";
    else cout << "NO\n";
}