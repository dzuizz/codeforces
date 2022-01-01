#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n, c1=0, c2=0, c3=0, ans=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==1) c1++;
        else if(arr[i]==2) c2++;
        else if(arr[i]==3) c3++;
        else ans++;
    }
    int m=min(c1, c3);
    ans += m;
    c1 -= m;
    c3 -= m;
    m=min(c1/2, c2);
    ans += m;
    c1 -= m;
    c2 -= m;
}