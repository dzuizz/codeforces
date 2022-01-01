#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int t, n, m;
string s2;

int main(){
    cin >> t;
    while(t--){
        string s = "d";
        cin >> n >> m >> s2;
        s += s2 +  "z";
        while(m--){
            vector<int> v;
            for(int i=1;i<n+1;i++){
                if( s[i]=='0' && ((s[i-1]!='1' && s[i+1]=='1') || (s[i-1]=='1' && s[i+1]!='1'))){
                    v.push_back(i);
                }
            }
            for(int i=0;i<v.size();i++) s[v[i]] = '1';
        }
        for(int i=1;i<n+1;i++) cout << s[i];
        cout << endl;
    }
}