#include <iostream>
using namespace std;
typedef long long ll;

int n, ans=0;
string s1, s2;

int main(){
    cin >> n >> s1 >> s2;
    for(int i=0;i<n;i++){
        int a=int(s1[i])-48, b=int(s2[i])-48;
        ans += min(abs(a-b), 10-abs(a-b));
    }
    cout << ans << endl;
}