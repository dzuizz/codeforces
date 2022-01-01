#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    for(ll i=0;i<t;i++){
        ll n, count=0, x=0, first;
        string types;
        cin >> n >> types;
        ll arr[n], arr2[n];
        bool c = true;
        for(int a=0;a<n;a++){
            if(types[a]=='2') {
                count++;
                arr[x] = a;
                x++;
            }
        }
        x = 0;
        for(int a=0;a<n;a++){
            if(types[a]=='2') {
                arr2[a] = arr[(x+1)%count];
                x++;
            }
        }
        if(count>=3 || count == 0){
            cout << "YES\n";
            for(int l=0;l<n;l++){
                for(int j=0;j<n;j++){
                    if(l==j){
                        cout << 'X';
                    }
                    else if(types[l]=='1' && types[j]=='1') cout << "=";
                    else if(types[l]=='2' && types[j]=='1') cout << "=";
                    else if(types[l]=='1' && types[j]=='2') cout << "=";
                    else if(types[l]=='2' && types[j]=='2') {
                        if(j==arr2[l]) cout << "+";
                        else if(l==arr2[j]) cout << "-";
                        else cout << "=";
                    }
                }
                cout << "\n";
            }
        }else{
            cout << "NO\n";
        }
    }
}