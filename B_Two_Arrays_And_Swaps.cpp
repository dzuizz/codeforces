#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int t, n, k;

int main(){
    cin >> t;
    while(t--){
        int sum = 0, index = 0;
        cin >> n >> k;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        while(k-- && b[index]>a[index]){
            sum += b[index] - a[index];
            index++;
        }
        cout << sum << endl;
    }
}