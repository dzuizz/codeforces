#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    char graph[n][m];
    for(int l=0;l<n;l++){
        if(l%2==0){
            for(int j=0;j<m;j++) graph[l][j] = '#';
        }else{
            if((l+1)%4==0){
                graph[l][0] = '#';
                for(int j=1;j<m;j++) graph[l][j] = '.';
            }else{
                for(int j=0;j<m-1;j++) graph[l][j] = '.';
                graph[l][m-1] = '#';
            }
        }
    }
    for(int l=0;l<n;l++){
        for(int j=0;j<m;j++){
            cout << graph[l][j];
        }
        cout << endl;
    }
}