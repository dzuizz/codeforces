#include <iostream>
#include <string>
#include <set>
using namespace std;
typedef long long ll;

bool check(int n){
    bool res=true;
    set<int> s;
    for(int i=0;i<4;i++) s.insert(to_string(n)[i]);
    if(s.size()>3) res = false;
    return res;
}

int main(){
    int n, ans;
    cin >> n;
    ans = n+1;
    while (check(ans)) ans++;
    cout << ans << endl;
}