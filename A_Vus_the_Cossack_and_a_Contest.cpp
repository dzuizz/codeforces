#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    if(m>=n && k>=n){
        cout << "Yes\n";
    }else cout << "No\n";
}