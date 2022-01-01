#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    string arr[n];
    for(int i=0;i<n;i++){
        if(i%2==0) arr[i] = "hate";
        else arr[i] = "love";
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]=="hate") cout << "I hate that ";
        else cout << "I love that ";
    }
    if(arr[n-1]=="hate") cout << "I hate it\n";
    else cout << "I love it\n";
}