#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s;
    getline(cin, s);
    for(int i = 0;i < s.size(); i++){
        if(s[i]=='z'){
            s[i]='a';
            continue;
        }
        if(s[i]=='Z'){
            s[i]='A';
            continue;
        }
        if((s[i]>='A' && s[i]<'Z') || (s[i]>='a'&&s[i]<'z')) s[i]++;
    }
    cout << s << '\n';
    return;
}
signed main()
{
    solve();
    return 0;
}