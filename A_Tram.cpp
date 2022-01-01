#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int big=0, n, a, b, cur=0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cur -= a - b;
        if(cur>big) big = cur;
    }
    cout << big << endl;
}