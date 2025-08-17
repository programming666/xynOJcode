#include <bits/stdc++.h>
using namespace std;
#define int long long
// 愿佛祖保佑代码
int sum(int s){
    int ans=0,ss=s;
    while(ss>=1){
        ans+=ss%10;
        ss/=10;
    }
    return ans;
}
signed main() {
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int s;
    cin>>s;
    cout<<sum(s);
    return 0;
}