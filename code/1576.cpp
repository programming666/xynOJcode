#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[10000005];
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> k;
    nth_element(a,a+k-1,a+n,greater<int>());
    cout<<a[k-1];
    return 0;
}