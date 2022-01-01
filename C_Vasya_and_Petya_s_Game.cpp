#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

const int N = 1e3;
int n, x;
ll product;
vector<int> v;
bool notPrime[N+5];

void answer(){
    for(int i=2;i<=n;i++){
        if(!notPrime[i]){
            for(int a=i;a<=n;a+=i){
                if(!notPrime[a]){
                    v.push_back(a);
                    notPrime[a] = true;
                }
            }
        }
    }
}

int main(){
    cin >> n;
    notPrime[0] = true, notPrime[1] = true;
    answer();
    
}