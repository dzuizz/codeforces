#include <iostream>
using namespace std;
typedef long long ll;

int d1, d2, d3;

int main(){
    cin >> d1 >> d2 >> d3;
    cout << min( min(2*(d1+d2), 2*(d2+d3)), min(d1+d2+d3, 2*(d1+d3)) );
}