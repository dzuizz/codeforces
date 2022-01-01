#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    int n, k, e;
    cin >> n >> k;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >> e;
        if(5-e>=k) v.insert(v.begin(), e);
    }
    cout << v.size()/3;
}