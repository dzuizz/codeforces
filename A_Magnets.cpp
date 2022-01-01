#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, prev, cur, grps=1;
    cin >> n >> prev;
    bool notFound=true;
    n--;
    while(n--){
        cin >> cur;
        if(prev!=cur) grps++;
        prev = cur;
    }
    cout << grps << endl;
}