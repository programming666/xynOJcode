#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void qwq(int n, int r, int c) {
    if (n == 3) {
        ans[r][c+1]='*',ans[r+1][c]='*',ans[r+1][c+2]='*',ans[r+2][c+1]='*';
        return;
    }
    int nn=n/3;
    qwq(nn,r,c+nn),qwq(nn,r+nn,c),qwq(nn,r+nn,c+2*nn),qwq(nn,r+2*nn,c+nn);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ans.assign(n, string(n,' '));
    qwq(n,0,0);
    for (int i = 0; i < n; ++i) cout<<ans[i]<<'\n';
    return 0;
}