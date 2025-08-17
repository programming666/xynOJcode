#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve(int k){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin>>a[i];
    unordered_set<int> mp;
    bool flag=0;
    for(int x : a){
        int cha=k-x;
        if (mp.count(cha)) {
            flag=1;
            break;
        }
        mp.insert(x);
    }
    cout<<(flag?"yes\n":"no\n");
    return;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,k;
    cin>>t>>k;
    while(t--){
        solve(k);
    }
    return 0;
}