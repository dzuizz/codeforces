#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define int long long
#define fi first
#define se second

typedef pair<int, int> ii;
const int MAX_N = 1e5+5;
const int M = 998244353;

struct Node {
    int cnt[2]={0,0};
    int inversions=0;
};

Node nodes[MAX_N];
vector<ii> adjlist[MAX_N];
bool vis[MAX_N];

void add(int &a, int b) {
    a = (a%M + b%M)%M;
}

void dfs(int ind) {
    if (vis[ind]) return;
    vis[ind] = 1;
    
    Node *cur = &nodes[ind];
    
    for (auto p : adjlist[ind]) {
        Node *nx = &nodes[p.fi];
        dfs(p.fi);
        
        add(cur->inversions, nx->inversions);
        add(cur->cnt[1], p.se);
        add(cur->inversions, cur->cnt[1] * (nx->cnt[0] + !p.se));
        add(cur->cnt[1], nx->cnt[1]);
        add(cur->cnt[0], nx->cnt[0] + !p.se);
    }
}

signed main() {
    int n; cin >> n;
    
    for (int i=1; i<=n; i++) {
        int x; cin >> x;
        for (int j=0; j<x; j++) {
            int a, b; cin >> a >> b;
            
            adjlist[i].push_back({a, b});
        }
    }
    
    dfs(1);
    cout << nodes[1].inversions << '\n';
}