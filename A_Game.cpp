#include <iostream>
using namespace std;
typedef long long ll;

int t, n;

int main() {
    cin >> t;
    while(t--) {
        cin >> n;

        int arr[n];
        bool foundLast = false;
        int firstInd = -1;
        int lastInd = -1;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for(int i = n - 1; i >= 0; i--) {
            if(arr[i] == 0) {
                if(!foundLast) {
                    foundLast = true;
                    lastInd = i;
                }
                firstInd = i;
            }
        }
        if(firstInd == -1) {
            cout << "0\n";
        } else {
            cout << lastInd - firstInd + 2 << endl;
        }
    }
}