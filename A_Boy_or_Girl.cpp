#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(){
    set<char> arr;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        arr.insert(s[i]);
    }
    if(arr.size()%2==0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
}