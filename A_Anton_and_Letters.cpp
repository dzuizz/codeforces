#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(){
    char c;
    cin >> c;
    string s;
    set<char> arr;
    while(cin >> s){
        if(s=="}") break;
        arr.insert(s[0]);
    }
    cout << arr.size() << endl;
}