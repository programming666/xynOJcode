#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e18;
int n,s,t;
struct B{
    int l,r,h,id;
};
vector<B> b;
struct E{
    int x,type,id;
    bool operator<(const E& other) const{
        if(x != other.x) return x<other.x;
        return type<other.type;
    }
};
vector<pair<int,int>> g[400005];
vector<int> d;
void add(int u,int v,int w){
    g[u].push_back({v,w});
}
void f() {
    cin>>n>>s>>t;
    b.resize(n+1);
    vector<E> e;
    for(int i = 1; i <= n; i++){
        cin>>b[i].l>>b[i].r>>b[i].h;
        b[i].id=i;
        add(2*i-1,2*i,b[i].r-b[i].l);
        add(2*i,2*i-1,b[i].r-b[i].l);
        e.push_back({b[i].l,1,i});
        e.push_back({b[i].l,2,i});
        e.push_back({b[i].r,3,i});
        e.push_back({b[i].r,4,i});
    }
    sort(e.begin(),e.end());
    set<pair<int,int>> S;
    for(auto ev : e){
        int id=ev.id;
        int h=b[id].h;
        if(ev.type == 1){
            S.insert({h,id});
        } else if (ev.type == 4) {
            S.erase({h,id});
        } else {
            S.erase({h,id});
            auto it=S.lower_bound({h,0});
            if (it!=S.begin()){
                it--;
                int tid=it->second;
                int th=b[tid].h,tl=b[tid].l,tr=b[tid].r;
                int dd=h-th;
                if(ev.type == 2){
                    int u=2*id-1,x=b[id].l;
                    add(u,2*tid-1,dd+(x-tl));
                    add(u,2*tid,dd+(tr-x));
                } else {
                    int u=2*id,x=b[id].r;
                    add(u,2*tid-1,dd+(x-tl));
                    add(u,2*tid,dd+(tr-x));
                }
            }
            S.insert({h,id});
        }
    }
    d.assign(2*n+2,INF);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    int sn=2*s-1;
    d[sn]=0;
    q.push({0,sn});
    while(!q.empty()){
        int u=q.top().second;
        int dst=q.top().first;
        q.pop();
        if(dst > d[u]) continue;
        for(auto iii : g[u]) {
            int v=iii.first,w=iii.second;
            if(d[u]+w<d[v]){
                d[v]=d[u]+w;
                q.push({d[v],v});
            }
        }
    }
    int res=min(d[2*t-1],d[2*t]);
    if(res == INF) cout<<-1;
    else cout<<res;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f();
    return 0;
}