#include <iostream>
#include <ctype.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << endl;
}