#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n, sum=0, h=0;
    cin >> n;
    while(sum+(h+1)*(h+2)/2<=n){
        h++;
        sum += h*(h+1)/2;
    }
    cout << h;
}