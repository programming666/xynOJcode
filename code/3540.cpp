#include <bits/stdc++.h>
#define int long long
using namespace std;
int g[405][405],c[405][405],a[405];
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        string s;
        cin >> s;
        for(int j = 1; j <= m; ++j) g[i][j]=(s[j-1]=='1'?1:-1);
    }
    for(int j = 1; j <= m; ++j){
        for(int i = 1; i <= n; ++i) c[i][j]=g[i][j]+c[i-1][j];
    }
    int z=0;
    for(int r1 = 1; r1 <= n; ++r1){
        for (int r2 = r1; r2 <= n; ++r2){
            int h=r2-r1+1;
            for (int j = 1; j <= m; ++j) a[j]=c[r2][j]-c[r1-1][j];
            unordered_map<int,int> p;
            p[0]=0;
            int s=0;
            for(int j = 1; j <= m; ++j){
                s+=a[j];
                if (p.count(s)){
                    int x=p[s];
                    int w=j-x;
                    z=max(z,w*h);
                } 
                else p[s]=j;
            }
        }
    }
    cout<<z;
    return 0;
}