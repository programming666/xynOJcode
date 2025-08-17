#include <bits/stdc++.h>
using namespace std;
#define int long long
// 愿佛祖保佑代码
signed main() {
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int a[n+m];
    for(int i = 0; i < n+m; i++) cin>>a[i];
    sort(a,a+n+m);
    for(int i = 0; i < n+m; i++) cout<<a[i]<<' ';
    return 0;
}