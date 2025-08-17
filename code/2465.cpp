#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int w,n;
    cin>>w>>n;
    if(n == 0){
        cout<<0;
        return 0;
    }
    int p[n];
    for(int i = 0; i < n; ++i) cin >> p[i];
    sort(p,p+n);
    int left=0,right=n-1,ans=0;
    while (left <= right) {
        if(left == right){
            ans++;
            break;
        }
        if(p[left]+p[right]<=w){
            ans++;
            left++; 
            right--;
        }
        else {
            ans++;
            right--;
        }
    }
    cout<<ans;
    return 0;
}