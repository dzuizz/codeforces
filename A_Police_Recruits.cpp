#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, p=0, e, ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        if(e==-1 && p==0){
            ans++;
        }else if(e==-1){
            p -= 1;
        }else{
            p += e;
        }
    }
    cout << ans << endl;
}