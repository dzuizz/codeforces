#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, ans=0;
    cin >> n;
    int home[n], guest[n];
    for(int i=0;i<n;i++){
        cin >> home[i] >> guest[i];
    }
    for(int l=0;l<n;l++){
        for(int j=0;j<n;j++){
            if(guest[l]==home[j]) ans++;
        }
    }
    cout << ans << endl;
}