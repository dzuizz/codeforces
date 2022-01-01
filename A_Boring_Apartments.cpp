#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        cout << (int(n[0])-49)*10+(n.length())*(n.length()+1)/2 << endl;
    }
}