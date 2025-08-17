#include<bits/stdc++.h>
using namespace std;
bool ck(int r,int c,int n,int m){
	return r>=0&&r<n&&c>=0&&c<m;
}
void solve() {
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<int>> aaa(n,vector<int>(m));
    for (int i = 0; i < n; ++i) {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < m; ++j) {
            aaa[i][j] = tmp[j] - '0';
        }
    }
    long long ans = 0;
    int dr[] = {0,-1,1,0,0},dc[]={0,0,0,-1,1};
    for (int i = 0; i < q; ++i) {
        int a,b;
        cin>>a>>b;
        int r=a-1,c=b-1;
        for (int i = 0; i < 5; ++i) {
            int curr=r+dr[i],curc=c+dc[i];
            if (ck(curr,curc,n,m)) {
                ans += aaa[curr][curc];
                aaa[curr][curc] = 0;
            }
        }
    }
    cout<<ans<<'\n';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 
    while(t--){
        solve(); 
    }
    return 0;
}