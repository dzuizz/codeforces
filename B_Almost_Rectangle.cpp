#include <iostream>
using namespace std;
typedef long long ll;

int t, n;
int xcoor[2], ycoor[2];

int main(){
    cin >> t;
    while(t--){
        int x=0;
        cin >> n;
        char graph[n][n];
        for(int l=0;l<n;l++){
            for(int j=0;j<n;j++){
                cin >> graph[l][j];
                if(graph[l][j]=='*'){
                    xcoor[x] = l;
                    ycoor[x++] = j;
                }
            }
        }
        if(ycoor[0]==ycoor[1]){
            if(ycoor[0]!=0){
                graph[xcoor[0]][0] = '*';
                graph[xcoor[1]][0] = '*';
            }else{
                graph[xcoor[0]][n-1] = '*';
                graph[xcoor[1]][n-1] = '*';
            }
        }else if(xcoor[0]==xcoor[1]){
            if(xcoor[0]!=0){
                graph[0][ycoor[0]] = '*';
                graph[0][ycoor[1]] = '*';
            }else{
                graph[n-1][ycoor[0]] = '*';
                graph[n-1][ycoor[1]] = '*';
            }
        }else{
            graph[xcoor[1]][ycoor[0]] = '*';
            graph[xcoor[0]][ycoor[1]] = '*';
        }
        for(int l=0;l<n;l++){
            for(int j=0;j<n;j++){
                cout << graph[l][j];
            }
            cout << endl;
        }
    }
}