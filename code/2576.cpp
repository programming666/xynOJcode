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
    string s,tmp="";
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if(s[i]!=';'){tmp+=s[i];}
        else{
            cout<<tmp<<'\n';
            tmp="";
        }
    }
    return 0;
}