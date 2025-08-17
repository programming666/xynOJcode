#include <bits/stdc++.h>
using namespace std;
#define int long long
// 愿佛祖保佑代码
void solve(string s){
    int ans1=0;
    string ans2="";
    for(int i = 0; i < s.size(); i++){
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')){ans1++;}
        else ans2+=s[i];
    }
    cout<<ans2<<'\n'<<ans1;
    return;
}
signed main() {
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    string s;
    cin>>s;
    solve(s);
    return 0;
}