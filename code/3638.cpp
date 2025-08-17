#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n;
    cin >> n;
    int a[n];
    a[0] = -1;
    for (int i = 1; i < n; ++i) cin >> a[i];
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        int gx[m];
        for(int i = 0; i < m; ++i) cin>>gx[i];
        int cnt[n]={0};
        for(int p : gx){
            int curr = p;
            while(curr != -1){
                cnt[curr]++;
                curr=a[curr];
            }
        }
        int ans=-1;
        for(int i = n-1; i >= 0; --i){
            if(cnt[i] == m){
                ans=i;
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}