#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, a, b; cin >> n >> a >> b;

        int arr[n];
        int diff = min(abs(a - b) - 1, 0);
        int small = min(a, b);
        for(int i = 0; i < n; i++) arr[i] = 1;

        if( 2 * small + 3 * diff < n - 1 )
        {
            int ind = 1;
            for(int i = 0; i < min(a, b); i++, ind++) {
                arr[ind] = arr[ind - 1] + 2;
                arr[ind + 1] = arr[ind] - 1;
                ind++;
            }
            arr[ind] = arr[ind - 1] + 2;
            for(int i = 0; i < diff; i++, ind++) {
                arr[ind] = arr[ind - 1];
                arr[ind + 1] = arr[ind] + 1;
                ind++;
                arr[ind + 1] = arr[ind] - 1;
                ind++;
            }
            for(int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        } else {
            cout << "-1\n";
        }
    }
}