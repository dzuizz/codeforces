#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int t, n;

string add(int a, char c){
    string res="";
    for(int i=0;i<a;i++){
        res += c;
    }
    return res;
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second!=b.second) return a.second<b.second;
    return a.first<b.first;
}

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        pair<int, int> packages[n];
        for(int i=0;i<n;i++){
            cin >> packages[i].first >> packages[i].second;
        }
        sort(packages, packages+n, cmp);
        string ans=add(packages[0].first, 'R')+add(packages[0].second, 'U'), cond = "YES";
        for(int i=1;i<n;i++){
            if(packages[i].first<packages[i-1].first){
                cond = "NO";
                ans = "";
                break;
            }
            ans += add(packages[i].first-packages[i-1].first, 'R') + add(packages[i].second-packages[i-1].second, 'U');
        }
        if(cond=="YES") cout << cond << endl << ans << endl;
        else cout << cond << endl;
    }
}