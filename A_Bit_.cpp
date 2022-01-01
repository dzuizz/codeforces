#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, x=0;
    char a, c;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> c >> a;
        if(c=='+') x++;
        else x--;
    }
    cout << x << endl;
}