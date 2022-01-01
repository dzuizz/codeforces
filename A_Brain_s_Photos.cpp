#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int r, c;
    char ch;
    bool b=false;
    cin >> r >> c;
    for(int i=0;i<r;i++){
        for(int ii=0;ii<c;ii++){
            cin >> ch;
            if(ch=='C' || ch=='M' || ch=='Y'){
                b = true;
                break;
            }
        }
        if(b) break;
    }
    if(b) cout << "#Color";
    else cout << "#Black&White";
}