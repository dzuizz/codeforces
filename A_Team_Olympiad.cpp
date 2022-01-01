#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    int n, e;
    cin >> n;
    vector<int> arr1, arr2, arr3;
    for(int i=0;i<n;i++){
        cin >> e;
        if(e==1){
            arr1.insert(arr1.begin(), i+1);
        }
        else if(e==2){
            arr2.insert(arr2.begin(), i+1);
        }
        else if(e==3){
            arr3.insert(arr3.begin(), i+1);
        }
    }
    int m = min( min(arr1.size(), arr2.size()), arr3.size());
    cout << m << endl;
    for(int i=0;i<m;i++){
        cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;
    }
}