#include <iostream>
using namespace std;
typedef long long ll;

int t, e, n, track=0, tempcount=0;
bool found1=false;

int main() {
    cin >> t;
    while(t--){
        cin >> n;
        track = 0;
        tempcount = 0;
        found1 = false;
        for(int i=0;i<n;i++) {
            cin >> e;
            if(!found1 && e==1) {
                found1 = true;
            }else if(found1 && e==0) {
                tempcount++;
            }else if(found1 && e==1) {
                track += tempcount;
                tempcount = 0;
            }
        }
        cout << track << endl;
    }
}