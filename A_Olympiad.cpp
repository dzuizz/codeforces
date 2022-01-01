#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int n, e;

int main(){
    cin >> n;
    set<int> s;
    for(int i=0;i<n;i++){
        cin >> e;
        if(e>0){
            s.insert(e);
        }
    }
    cout << s.size();
}