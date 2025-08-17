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
    int a[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++) cin>>a[i][j];
    }
    int n,m;
    cin>>n>>m;
    swap(a[n-1],a[m-1]);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout<<a[i][j]<<(j==4?"":" ");
        }
        cout<<'\n';
    }
    return 0;
}