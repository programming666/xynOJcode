#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF=1e18;
int n,m,s,q;
vector<pair<int,int>> g[200005];
int d[200005];
bool v[200005];
void f(){
    for(int i = 1; i <= n; ++i){
        d[i]=INF;
        v[i]=0;
    }
    d[s] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
    p.push({0,s});
    while(!p.empty()){
        int a=p.top().second;
        p.pop();
        if(v[a]) continue;
        v[a]=1;
        for(auto e : g[a]){
            int b=e.first,w=e.second;
            if(d[a]+w<d[b]){
                d[b]=d[a]+w;
                p.push({d[b],b});
            }
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> s >> q;
    for(int i = 0; i < m; ++i){
        int u,v,l;
        cin>>u>>v>>l;
        g[u].push_back({v,l});
        g[v].push_back({u,l});
    }
    f();
    for(int i = 0; i < q; ++i){
        int h;
        cin >> h;
        cout << d[h] << '\n';
    }
    return 0;
}