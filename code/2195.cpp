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
    int n;
    cin>>n;
    int b[n];
    for(int i = 0; i < n; i++){
        cin>>b[i];
    }
    int tmp=1,maxn=1;
    for(int i = 1; i < n; i++){
        if(b[i]>b[i-1]){tmp++;}
        else{
            maxn=max(maxn,tmp);
            tmp=1;
        }
    }
    maxn=max(tmp,maxn);
    cout<<maxn;
    return 0;
}