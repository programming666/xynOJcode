#include<bits/stdc++.h>
#define int long long
using namespace std;
struct s {
    int k,sc;
};
bool c(s a,s b){
    if(a.sc != b.sc) return a.sc > b.sc;
    return a.k < b.k;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    s v[n];
    for (int i = 0; i < n; i++) cin >> v[i].k >> v[i].sc;
    sort(v,v+n,c);
    int p=m*1.5;
    int l=v[p-1].sc;
    int a=0;
    while(a<n && v[a].sc>=l) a++;
    cout<<l<<' '<<a<<'\n';
    for(int i = 0; i < a; i++) cout<<v[i].k<<' '<<v[i].sc<<'\n';
    return 0;
}