#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, a, b;
    for(int l=0;l<5;l++){
        for(int j=0;j<5;j++){
            cin >> n;
            if(n==1){
                a = l;
                b = j;
                break;
            }
        }
    }
    cout << abs(a-2)+abs(2-b) << endl;
}