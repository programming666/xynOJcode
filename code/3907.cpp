#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
	int a[n],sum=0;
    for (int i = 0; i < n; ++i){
        cin>>a[i];
        sum+=a[i];
    }
    int cur = 0;
    for (int i = 0; i < n; ++i) cur+=a[i]*(n-i);
    int minn = cur;
    for (int i = 1; i < n; ++i) {
        int lst=a[i-1];
        cur=cur+sum-n*lst;
        minn=min(minn,cur);
    }
    cout << minn;
    return 0;
}