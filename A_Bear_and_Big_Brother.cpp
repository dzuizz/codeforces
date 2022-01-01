#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int a, b, x=0;
    cin >> a >> b;
    while(b>=a){
        b *= 2;
        a *= 3;
        x++;
    }
    cout << x << endl;
}