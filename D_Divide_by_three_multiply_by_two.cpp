#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll n;

bool cmp(ll a, ll b){
    ll a3=0, b3=0, aa=a, bb=b;
    while(aa%3==0){
        aa/=3;
        a3++;
    }
    while(bb%3==0){
        bb/=3;
        b3++;
    }
    if(a3!=b3) return a3>b3;
    ll a2=0, b2=0;
    while(a%2==0){
        a /= 2;
        a2++;
    }
    while(b%2==0){
        b /= 2;
        b2++;
    }
    return a2<b2;
}

int main(){
    cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n, cmp);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}