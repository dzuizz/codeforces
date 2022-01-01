#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int h, m;
        cin >> h >> m;
        cout << 1440 - 60*h - m << endl;
    }
}