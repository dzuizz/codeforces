#include <iostream>
using namespace std;
typedef long long ll;

const int N = 2e5;
string bef, aft, s;
int arr[N+5], ind, leng, lenga, lengb;

bool check(int d){
    s = bef;
    for(int i=0;i<d;i++){
        s[arr[i]-1] = ' ';
    }
    ind = 0;
    for(int i=0;i<s.length() && ind<aft.length();i++){
        if(s[i]==aft[ind]) ind++;
    }
    // cout << s << endl;
    return ind>=aft.length();
}

int bin(int l, int r){
    int mid = (l + r) / 2;
    // cout << ">> " << l << " " << r << endl;
    if(check(mid)){
        if(l>=r-1){
            if(check(r)) return r;
            return mid;
        }
        return bin(mid, r);
    }
    return bin(l, mid-1);
}

int main(){
    cin >> bef >> aft;
    leng = bef.length();
    for(int i=0;i<leng;i++){
        cin >> arr[i];
    }
    cout << bin(0, leng);
}