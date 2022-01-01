#include <iostream>
using namespace std;
typedef long long ll;

const int N = 1e5;
int arr[N+2];
int t, n;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int arr[N+2]){
    int lcm = 1;
    for(int i=0;i<n;i++){
        
    }
}

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++) cin >> arr[i];
        int l = lcm(arr);
    }
}