#include <bits/stdc++.h>
using namespace std;
#define int long long
// 愿佛祖保佑代码
struct TV{
    int s,e;
    void input(){cin>>s>>e;}
};
bool cmp(TV a,TV b){
    return a.e<b.e;
}
signed main() {
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    TV a[n];
    for(int i = 0; i < n; i++) a[i].input();
    sort(a,a+n,cmp);
    int cnt=1,lst=a[0].e;
    for(int i = 1; i < n; i++){
        if(a[i].s>=lst){
            lst=a[i].e;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}