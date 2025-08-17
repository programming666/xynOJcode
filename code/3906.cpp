#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n-1; ++i) {
        if(a[i] == 1){
            ans++;
            a[i+1]=1-a[i+1]; 
        }
    }
    if(a[n-1]==0){cout<<ans;}
    else cout<<"impossible";
    return 0;
}