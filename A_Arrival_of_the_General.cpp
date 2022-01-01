#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n, big=0, bigi=0, small=101, smalli=0, e;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        if(e>big){
            big = e;
            bigi = i;
        }
        if(e<=small){
            small = e;
            smalli = i;
        }
    }
    if(bigi>smalli){
        cout << bigi + (n-smalli-2) << endl;
    }else{
        cout << bigi + (n-smalli-1) << endl;
    }
}