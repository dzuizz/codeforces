#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, l=0, r=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='L') l++;
        else r++;
    }
    cout << l+r+1;
}