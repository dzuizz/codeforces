#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

const int N = 5e4;
int n, m, k, dummy;
int dsu[N+2];
vector< pair< string, pair<int, int> > > v;
vector<string> ans;

int find(int n){
    if(dsu[n] == n) return n;
    return dsu[n] = find(dsu[n]);
}

void merge(int a, int b){
    a = find(a); b = find(b);
    if(a == b) return;
    dsu[a] = b;
}

int main(){
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++) dsu[i] = i;
    for(int i=1;i<=m;i++) cin >> dummy >> dummy;
    v = vector<pair<string,pair<int,int>>>(k+2);
    for(int i=1;i<=k;i++) cin >> v[i].first >> v[i].second.first >> v[i].second.second;
    reverse(v.begin()+1, v.begin()+k+1);
    for(int i=1;i<=k;i++){
        if(v[i].first[0] == 'a'){
            if(find(v[i].second.first) == find(v[i].second.second)) ans.push_back("YES\n");
            else ans.push_back("NO\n");
        }else{
            merge(v[i].second.first, v[i].second.second);
        }
    }
    reverse(ans.begin(), ans.end());
    for(int i=0;i<ans.size();i++) cout << ans[i];
}