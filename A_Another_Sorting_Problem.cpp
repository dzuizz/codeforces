#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int n, m, x;

bool cmp(pair<int, string> a, pair<int, string> b){
    int ind=0;
    string as = a.second, ab = b.second;
    while(as[ind]==ab[ind]) ind++;
    if(ind%2==0) return as[ind]<ab[ind];
    return as[ind]>ab[ind];
}

int main(){
    cin >> n >> m;
    pair<int, string> arr[n], arr2[n];
    for(int i=0;i<n;i++){
        cin >> arr[i].second;
        arr[i].first = i+1;
        arr2[i].first = i+1;
        arr2[i].second = arr[i].second;
    }
    sort(arr, arr+n, cmp);
    for(int i=0;i<n;i++, x=0){
        cout << arr[i].first << " ";
    }
}