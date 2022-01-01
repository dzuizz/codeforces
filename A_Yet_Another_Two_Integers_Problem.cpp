#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int x = abs(a-b);
        if(x%10==0){
            cout << x/10 << endl;
        }
        else cout << (x-x%10)/10+1 << endl;
    }
}