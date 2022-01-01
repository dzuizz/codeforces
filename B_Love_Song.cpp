#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n, q, st, e;
    cin >> n >> q;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        cin >> st >> e;
        string sub = s.substr(st-1, e-1);
    }
}