#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    string s;
    cin >> s;
    int len = s.size();
    if(len == 0) return;
    int n=0,m=0;
    for(int i = sqrt(len); i >= 1; --i){
        if(len%i==0){
            n=i;
            m=len/i;
            break;
        }
    }
    for(int j = 0; j < m; ++j){
        for (int i = 0; i < n; ++i) cout<<s[i*m+j];
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}