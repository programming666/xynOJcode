#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a,a+n);
    int m=1e9+7;
    int p[n];
    p[0]=1;
    for(int i = 1; i < n; ++i) p[i]=(p[i-1]*2)%m;
    int x=0,y=0,q=0;
    for(int i = 0; i < n; ++i){
        int u=(a[i]*a[i])%m;
        x=(x+(u*p[i])%m)%m;
        y=(y+(u*p[n-1-i])%m)%m;
        q=(q+u)%m;
    }
    int r=0,v=0;
    for(int i = 1; i < n; ++i){
        v=(a[i-1]+2*v)%m;
        r=(r+(a[i]*v)%m)%m;
    }
    int s=(x+y)%m,w=(2*((q+r)%m))%m;
    s=(s-w+m)%m;
    cout<<s;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}