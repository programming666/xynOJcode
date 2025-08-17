#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string s;
    cin >> s;
    if(s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
    for(int i = 1; i < s.size(); i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    cout<<s<<'\n';
}
signed main(){
    int s;
    cin >> s;
    while (s--) solve();
    return 0;
}