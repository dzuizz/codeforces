#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << (a+b-2*min(a, b))/2 << endl;
}