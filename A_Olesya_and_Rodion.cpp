#include <iostream>
using namespace std;
typedef long long ll;

int n;
string s;

int main() {
    cin >> n >> s;
    int leng = s.length();
    if(leng > n) {
        cout << "-1\n";
    }else{
        while(leng < n) {
            s += '0';
            leng++;
        }
        cout << s << endl;
    }
}