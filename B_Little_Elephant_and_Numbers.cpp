#include <iostream>
using namespace std;
typedef long long ll;

int n, answer=0;

bool check(int a){
    
}

void ans(){
    for(int i=1;i<=n;i++){
        if(n%i==0 && check(i)) answer++;
    }
}

int main(){
    cin >> n;
    ans();
    cout << answer;
}