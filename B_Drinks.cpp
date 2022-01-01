#include <iostream>
#include <iomanip>
using namespace std;
typedef long long ll;

int main(){
    int n, sum=0, e;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        sum += e;
    }
    cout << setprecision(14) << 1.0*sum/n << endl;
}