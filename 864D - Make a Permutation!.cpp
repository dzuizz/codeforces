#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;

  int a[n];
  for (int i=0; i<n; ++i) cin >> a[i];

  map<int,int> mp;
  map<int,bool> pos[n+1];
  for (int i=0; i<n; ++i)
    ++mp[a[i]],pos[a[i]][i]=true;

  bool nah[n];
  memset(nah, 0, sizeof nah);

  int cnt=0;
  for (int k=1, i=0; k<=n; ++k) {
    if (mp[k]) {
      nah[pos[k].lower_bound(i)->first]=true;
      continue;
    }

    while (mp[a[i]]==1||nah[i]) ++i;
    --mp[a[i]],++mp[k];
    a[i]=k, ++cnt;
    ++i;
  }

  cout << cnt << '\n';
  for (int i=0; i<n; ++i) cout << a[i] << " ";
  cout << '\n';
}

