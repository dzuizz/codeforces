#include<bits/stdc++.h>
using namespace std;
#define int long long
constexpr int INF=3e18;
void solve(){
  int n,ans=0; cin>>n;
  int x[n],y[n];
  for(auto&e:x) cin>>e;
  for(auto&e:y) cin>>e;
  for(int i=0;i<n;++i) for(int j=0;j<i;++j)
    ans=max(ans,(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
  cout<<ans<<'\n';
}
signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t=1; //cin>>t;
  for(int i=1;i<=t;++i){
    solve();
  }
  return 0;
}

