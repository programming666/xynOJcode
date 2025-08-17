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
    vector<int> a;
    int aaa;
    while(cin>>aaa){
        if(aaa==0) break;
        a.push_back(aaa);
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<(i==a.size()-1?"":" ");
    }
    return 0;
}