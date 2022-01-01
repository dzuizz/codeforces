#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(){
    int t, n, sum;
    cin >> t;
    while(t--){
        sum = 0;
        set<char> arr;
        string s;
        cin >> n >> s;
        char prev='a';
        for(int i=0;i<s.length();i++){
            if(s[i]!=prev){
                arr.insert(s[i]);
                sum++;
            }
            prev = s[i];
        }
        if(sum==arr.size()) cout << "YES\n";
        else cout << "NO\n";
    }
}