#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(){
    set<int> s;
    int e;
    for(int i=0;i<4;i++){
        cin >> e;
        s.insert(e);
    }
    cout << 4 - s.size() << endl;
}