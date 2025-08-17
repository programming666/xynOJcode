#include <bits/stdc++.h>
using namespace std;
#define int long long
// 愿佛祖保佑代码
signed main() {
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n][m],xs=0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin>>a[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin>>b[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j]==b[i][j]) xs++;
        }
    }
    printf("%.2lf",100.0*xs/(n*m));
    return 0;
}