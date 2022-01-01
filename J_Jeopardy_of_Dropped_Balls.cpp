#include <iostream>
using namespace std;
typedef long long ll;

int n, m, k, l=0, j, ball;

int main(){
    cin >> n >> m >> k;
    int graph[n][m];
    for(int l=0;l<n;l++){
        for(int j=0;j<m;j++){
            cin >> graph[l][j];
        }
    }
    for(int i=0;i<k;i++){
        cin >> j;
        j--;
        l = 0;
        while(l<n){
            ball = graph[l][j];
            if(ball==1){
                graph[l][j] = 2;
                j++;
            }else if(ball==2){
                l++;
            }else{
                graph[l][j] = 2;
                j--;
            }
        }
        cout << j+1 << " ";
    }
}