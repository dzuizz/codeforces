#include <algorithm>
#include <iostream>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

bool happy;

bool cmp(ii a, ii b) {
    int diffFirst = a.first - b.first , diffSecond = a.second - b.second;
    if( (diffFirst < 0 && diffSecond > 0) || (diffFirst > 0 && diffSecond < 0) ) happy = true;
    return a < b;
}

int main() {
    int n; cin >> n;
    ii arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr+n, cmp);
    if(happy) cout << "Happy Alex\n";
    else cout << "Poor Alex\n";
}