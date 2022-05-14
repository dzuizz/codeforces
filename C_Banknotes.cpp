#include<iostream>
using namespace std;
typedef long long ll;

int main() {
  ll t; cin >> t;
  ll expo[11];
  expo[0] = 1;
  for (int i = 1; i <= 10; i++) expo[i] = expo[i-1] * 10;

  while(t--) {
    ll n, k; cin >> n >> k; k++;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    
    ll ind = 0, ans = 0;
    while (k && ind < n - 1) {
      int calc = min(expo[a[ind+1]-a[ind]] - 1, k);
      
      ans += calc * expo[a[ind]];
      k -= calc;
      ind++;
    }
    
    ans += k * expo[a[ind]];
    cout << ans << endl;
  }
}
