#include <iostream>
using namespace std;
typedef long long ll;

string s;

int main() {
    int lf = 1, rg = 1e6;
    while(lf < rg) {
        int mid = (lf + rg + 1) / 2;
        cout << mid << endl;
        cin >> s;
        if(s == ">=") lf = mid;
        else rg = mid-1;
    }
    cout << "! " << lf << endl;
}