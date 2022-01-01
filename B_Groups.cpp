#include <iostream>
using namespace std;
typedef long long ll;

int t, n;

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        int graph[n][5];
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cin >> graph[i][j];
            }
        }
        if(n%2==1) cout << "NO\n";
        else{
            
        }
    }
}