#include<algorithm>
#include<iostream>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

const ll INF = 1e11;
ll res, mid;
int n, s;
pll ans = pll(-1, -1);

int main() {
  cin >> n >> s;
  
  ll a[n], totalCost[n];
  
  for(int i = 0; i < n; i++) cin >> a[i];
  
  int lf = 0, rg = n;
  while(lf <= rg) {
    
    mid = (lf + rg) / 2;
    res = 0;
    
    for(int i = 0; i < n; i++) totalCost[i] = a[i] + ll(i + 1) * mid;
    sort(totalCost, totalCost + n);
    
    for(int i = 0; i < mid; i++) {
      res += totalCost[i];
    }
    if(res <= s) {
      ans = pll(mid, res);
      lf = mid + 1;
    } else rg = mid - 1;
  }
  cout << ans.first << " " << ans.second << endl;
  
  return 0;
}