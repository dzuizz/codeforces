#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, m=0, c=0, a, b;
    cin >> n;
    while (n--){
        cin >> a >> b;
        if(a>b) m++;
        else if(b>a) c++;
    }
    if(m>c) cout << "Mishka";
    else if(m<c) cout << "Chris";
    else cout << "Friendship is magic!^^";
}