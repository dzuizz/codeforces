#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, e, ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int count=0;
        for(int l=0;l<3;l++) {
            cin >> e;
            if(e>0) count++;
        }
        if(count>1) ans++;
    }
    cout << ans;
}