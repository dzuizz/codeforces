#include <iostream>
using namespace std;
typedef long long ll;

const int N = 2e5;
string operation;
int n, m, a, b;
int followers[N+2];
int edge[N+2];
int arr[N+2];
int ep[N+2];

int find(int n){
  if(arr[n] == n) return n;
  return find(arr[n]);
}

void merge(int a, int b){
  a = find(a); b = find(b);
  if(a == b) return;
  int comp = max(followers[a], followers[b]);
  if(comp == followers[b]){
    arr[a] = b; 
    edge[a] = -ep[b];
    followers[a] = followers[a] + followers[b] + 1; 
  }else{
    arr[b] = a;
    edge[b] = -ep[a];
    followers[b] = followers[b] + followers[a] + 1;
  }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<=n;i++) arr[i] = i;
    for(int i=0;i<m;i++){
        cin >> operation >> a;
        if(operation[0] == 'j'){
            cin >> b;
            merge(a, b);
        }else if(operation[0] == 'a') {
          cin >> b;
          ep[find(a)] += b;
        }else{
          int experience = 0;
          while(arr[a] != a){
            experience += ep[a] + edge[a];
            a = arr[a];
          }
          experience += ep[a];
          cout << experience << endl;
        }
    }
}