#include <iostream>
using namespace std;
typedef long long ll;

int t, e, n, sum=0;

int main(){
    cin >> t;
    while(t--){
        sum = 0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> e;
            sum += e;
        }
        if(sum%n==0) cout << sum/n << endl;
        else cout <<sum/n+1 << endl;
    }
}