#include <bits/stdc++.h>
using namespace std;
#define int long long
// 愿佛祖保佑代码
void solve(){
    int n,k;
    cin>>n>>k;
    bool f=0;
    int b[n];
    for(int i = 0; i < n; i++) cin>>b[i];
    for(int i = 0; i < n; i++){
        if(f==1) break;
        for(int j = 0; j < n; j++){
            if(b[i]+b[j]==k&&i!=j) {f=1;break;}
        }
    }
    cout<<(f?"yes\n":"no\n");
    return;
}
signed main() {
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}