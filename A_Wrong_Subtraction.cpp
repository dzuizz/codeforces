#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    while(k--){
        if(n%10==0) n/= 10;
        else n -= 1;
    }
    cout << n << endl;
}