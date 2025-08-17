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
    vector<int> a;
    int tmp,cnt=0;
    while(cin>>tmp){
        if(tmp==0) break;
        a.push_back(tmp);
        cnt++;
    }
    sort(a.begin(),a.end());
    if(cnt%2==0){
        cout<<fixed<<setprecision(1)<<(1.0*a[cnt/2]+a[cnt/2-1])/2.0;
    }
    else cout<<a[cnt/2];
    return 0;
}