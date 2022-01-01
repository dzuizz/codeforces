#include <iostream>
using namespace std;
typedef long long ll;

int n;

int main(){
    cin >> n;
    if(n>1 && n%2==0){
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout << i+2 << " ";
            }else{
                cout << i << " ";
            }
        }
    }else cout << "-1\n";
}