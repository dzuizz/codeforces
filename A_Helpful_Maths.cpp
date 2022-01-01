#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int a=(s.length()+1)/2, x=0;
    int arr[a];
    for(int i=0;i<s.length();i+=2){
        arr[x] = int(s[i])-48;
        x++;
    }
    sort(arr, arr+a);
    cout << arr[0];
    for(int i=1;i<a;i++) cout << "+" << arr[i];
}