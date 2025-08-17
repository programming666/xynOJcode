#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int s;
    cin>>s;
    int b[s];
    int num[50005]={0};
    for(int i = 0; i < s; i++){
        cin>>b[s];
        num[b[s]]++;
    }
    int maxn=LLONG_MIN,zs=0;
    for(int i = 0; i < 50005; i++){
        if(maxn<=num[i]){
            maxn=num[i];
            zs=i;
        }
    }
    cout<<zs<<' '<<maxn;
    return 0; 
}