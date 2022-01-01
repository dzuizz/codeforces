#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int arr[4], ans=0;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        ans += arr[int(s[i])-49];
    }
    cout << ans;
}