#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    int n,k,ans=0,sum[100010]={0},b[100010]={0},tmp;
    cin>>n>>k;
    for(int i = 1; i <= n; i++){
        cin>>tmp;
        sum[i]=sum[i-1]+tmp;
    }
    for(int i = 0;i <= n; i++) ans+=b[sum[i]%k]++;
    cout<<ans;
    return 0;
}
