#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, a=0, d=0;
    cin >> n;
    char ch;
    for(int i=0;i<n;i++){
        cin >> ch;
        if(ch=='A') a++;
        else d++;
    }
    if(a>d) cout << "Anton\n";
    else if(a<d) cout << "Danik\n";
    else cout << "Friendship\n";
}