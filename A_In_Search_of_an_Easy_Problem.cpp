#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, e;
    string s="EASY";
    cin >> n;
    while(n--){
        cin >> e;
        if(e==1){
            s = "HARD";
            break;
        }
    }
    cout << s << endl;
}