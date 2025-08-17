#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int c[n];
    for (int i = 0; i < n; i++) cin >> c[i];    
    int a[m];
    for (int i = 0; i < m; i++) cin >> a[i];
    int max_c = *max_element(c,c+n);
    int sum = 0,sum2=0;
    for (int val : a) {
        if (val > 0) {
            sum += val;
        }
      sum2+=val;
    }
    if(n==1) cout<<max_c+sum2;
    else cout << max_c + sum;
    
    return 0;
}
