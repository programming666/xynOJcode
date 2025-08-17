#include <bits/stdc++.h>
using namespace std;
// 愿佛祖保佑代码
int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int a[n+5][n+5]={{0}};
    while(m--){
        int u,v;
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }
    for(int i = 1; i <= n; i++){
        cout<<a[i][1];
        for(int j = 2; j <= n; j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    vector<int> b[n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j]){
                b[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(b[i].size()==0){
            cout<<"\n";
            continue;
        }
        cout<<b[i][0];
        for(int j = 1; j < b[i].size(); j++){
            cout<<" "<<b[i][j];
        }
        cout<<'\n';
    }
    return 0;
}