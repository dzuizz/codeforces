#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(){
    int n, t, e;
    cin >> n;
    set<int> s;
    for(int a=0;a<2;a++){
        cin >> t;
        for(int i=0;i<t;i++){
            cin >> e;
            s.insert(e);
        }
    }
    if(s.size()==n) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
}