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
    cin >> n;
    vector<int> res;
    int p = 1;
    while ((1LL << (p + 1)) <= n) p++;    
    int sg = n;
    for (int i = p; i >= 1; i--) {
        int val=1LL<<i;
        if (val <= sg) {
            res.push_back(val);
            sg-=val;
        }
    }
    if (sg == 0) {
        for (int i = 0; i < res.size(); i++) {
            if (i > 0) cout << " ";
            cout << res[i];
        }
    } 
    else cout<<-1;
    return 0;
}
