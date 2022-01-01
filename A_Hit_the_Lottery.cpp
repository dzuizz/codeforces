#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, ans=0, index=0;
    cin >> n;
    int arr[5] = {100, 20, 10, 5, 1};
    while(index<6){
        ans += n/arr[index];
        n %= arr[index];
        index++;
    }
    cout << ans << endl;
}