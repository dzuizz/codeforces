#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
  int n,ans=0; cin>>n;
  priority_queue<int> pq;
  for(int i=0;i<n;++i){
    int x; cin>>x;
    if(pq.size()&&-pq.top()<x){
      ans+=x+pq.top();
      pq.pop();
      pq.emplace(-x);
    }
    pq.emplace(-x);
  }
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

