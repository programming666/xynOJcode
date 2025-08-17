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
    string s;
    cin>>s;
    int ans=0;
    for(char i : s){
        if(i=='1') ans++;
    }
    cout<<ans;
    return 0;
}